#!/usr/bin/env python3

# Import modules
import rospy
import numpy as np

# The Twist message is used to send velocities to the robot
from geometry_msgs.msg import Twist

# The TransformStamped message is imported to create a child frame
from geometry_msgs.msg import TransformStamped

# Import StaticTransformBroadcaster to publish static transforms
import tf2_ros

GOAL = (0)*7 # TODO (x,y,z, qx, qy, qz, qw) get it via listening to other command topic?

def quaternion_inverse(q):
    """Compute the inverse of a quaternion."""
    q_conjugate = q * np.array([1, -1, -1, -1])
    q_norm_squared = np.dot(q, q)
    q_inverse = q_conjugate / q_norm_squared
    return q_inverse

def quaternion_multiply(q1, q2):
    """Multiply two quaternions."""
    w1, x1, y1, z1 = q1
    w2, x2, y2, z2 = q2
    w = w1*w2 - x1*x2 - y1*y2 - z1*z2
    x = w1*x2 + x1*w2 + y1*z2 - z1*y2
    y = w1*y2 + y1*w2 + z1*x2 - x1*z2
    z = w1*z2 + z1*w2 + x1*y2 - y1*x2
    return np.array([w, x, y, z])

def compute_relative_quaternion(q1, q2):
    """Compute the relative quaternion between two quaternions."""
    q1_inv = quaternion_inverse(q1)
    q_rel = quaternion_multiply(q2, q1_inv)
    return q_rel

def quaternion_to_euler(q):
    """Convert a quaternion into Euler angles (roll, pitch, yaw)"""
    # Extract the single quaternion components
    w, x, y, z = q

    # Roll (x-axis rotation)
    sinr_cosp = 2 * (w * x + y * z)
    cosr_cosp = 1 - 2 * (x**2 + y**2)
    roll = np.arctan2(sinr_cosp, cosr_cosp)

    # Pitch (y-axis rotation)
    sinp = 2 * (w * y - z * x)
    if abs(sinp) >= 1:
        # Use 90 degrees if out of range
        pitch = np.pi / 2 * np.sign(sinp)
    else:
        pitch = np.arcsin(sinp)

    # Yaw (z-axis rotation)
    siny_cosp = 2 * (w * z + x * y)
    cosy_cosp = 1 - 2 * (y**2 + z**2)
    yaw = np.arctan2(siny_cosp, cosy_cosp)

    return np.degrees(roll), np.degrees(pitch), np.degrees(yaw)


class Move:
	"""
	A class that sends Twist messages to move the Stretch robot forward.
	"""
	def __init__(self):
		"""
		Function that initializes the publisher.
		:param self: The self reference.
		"""
		# Setup a publisher that will send the velocity commands to Stretch
		# This will publish on a topic called "/stretch/cmd_vel" with a message type Twist
		self.pub = rospy.Publisher('/stretch/cmd_vel', Twist, queue_size=1) #/stretch_diff_drive_controller/cmd_vel for gazebo
        self.goal_pos_sub = rospy.Subscriber('ArUco_transform', TransformStamped, self.joint_states_callback)

        # Initialize publisher
        self.transform_pub = rospy.Publisher('ArUco_transform', TransformStamped, queue_size=10)

	def move_forward(self, vel):
		"""
		Function that publishes Twist messages
		:param self: The self reference.

		:publishes command: Twist message.
		"""
		# Make a Twist message.  We're going to set all of the elements, since we
		# can't depend on them defaulting to safe values
		command = Twist()

        # TODO
		# A Twist has three linear velocities (in meters per second), along each of the axes.
		# For Stretch, it will only pay attention to the x velocity, since it can't
		# directly move in the y direction or the z direction
		# command.linear.x = vel[0]
		# command.linear.y = vel[1]
		# command.linear.z = vel[2]

		# # A Twist also has three rotational velocities (in radians per second).
		# # The Stretch will only respond to rotations around the z (vertical) axis
        # angles = quaternion_to_euler(q)
		# command.angular.x = angles[0]
		# command.angular.y = angles[1]
		# command.angular.z = angles[2]

		# Publish the Twist commands
		self.pub.publish(command)
        
# Instanstiate a `Move()` object
base_motion = Move()

def not_reach_target(cur_trans):
    distance = [0] * 7
    distance[0] = GOAL[0] - cur_trans.transform.translation.x
    distance[1] = GOAL[1] - cur_trans.transform.translation.y
    distance[2] = GOAL[2] - cur_trans.transform.translation.z
    curr_q = [cur_trans.transform.rotation.x, cur_trans.transform.rotation.y, cur_trans.transform.rotation.z, cur_trans.transform.rotation.w]
    distance[3:] = list(compute_relative_quaternion(curr_q, GOAL[3:]))

    if np.all(distance == [0] * 7): #TODO set a threshold
        return False
    else:
        return distance

		
class FrameListener():
    """
    This Class prints the transform between the fk_link_mast and the
    link_grasp_center frame.
    """
    def __init__(self):
        """
        A function that initializes the variables and looks up a tranformation
        between a target and source frame.
        :param self: The self reference.
        """
        # Start a Tf buffer that will store the tf information for a few seconds.
        # Then set up a tf listener, which will subscribe to all of the relevant
        # tf topics, and keep track of the information.
        tf_buffer = tf2_ros.Buffer()
        listener = tf2_ros.TransformListener(tf_buffer)

        # Store frame names in variables that will be used to compute transformations
        from_frame_rel = 'base_link'
        to_frame_rel = 'loc0'

        # Give the listener some time to accumulate transforms
        #rospy.sleep(1.0)

        # We're going to publish information at 1 Hz
        rate = rospy.Rate(20)

        # Run while loop until the node is shutdown
        while not rospy.is_shutdown():
            # Try to look up the transform we want. Use a try-except block, since
            # it may fail on any single call, due to internal timing issues in the
            # transform publishers
            try:
                # Look up transform between from_frame_rel and to_frame_rel frames
                trans = tf_buffer.lookup_transform(to_frame_rel,
                                                   from_frame_rel,
                                                   rospy.Time())
                # Print the transform
                rospy.loginfo('The pose of target frame %s with reference from %s is: \n %s', from_frame_rel, to_frame_rel, trans.transform)
                distance = not_reach_target(trans)
                if distance:
                    base_motion.move_forward(distance) # TODO set a reasonable speed
                else:
                    base_motion.move_forward([0]*7) # TODO

            except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException):
                rospy.logwarn(' Could not transform %s from %s ', to_frame_rel, from_frame_rel)

            # # Manage the rate the node prints out a message
            # rate.sleep()



if __name__ == '__main__':
	# Initialize the node, and call it "move"
    rospy.init_node('move_base_to_global')
    FrameListener()
    rospy.spinOnce()
	# rate = rospy.Rate(10)

    # Give control to ROS.  This will allow the callback to be called whenever new
    # messages come in.  If we don't put this line in, then the node will not work,
    # and ROS will not process any messages
        rospy.spin()