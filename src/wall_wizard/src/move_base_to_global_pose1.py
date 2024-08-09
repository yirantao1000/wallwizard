#!/usr/bin/env python3

# Import modules
import sys
import rospy
import actionlib
import numpy as np
from copy import deepcopy

# The Twist message is used to send velocities to the robot
from geometry_msgs.msg import Twist

# The TransformStamped message is imported to create a child frame
from geometry_msgs.msg import TransformStamped
from geometry_msgs.msg import PoseStamped
from nav_msgs.msg import Odometry

# Import StaticTransformBroadcaster to publish static transforms
import tf2_ros

from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal
from utils import *

control_rate = 20

class TrajectoryPlanner:
    def __init__(self):
        self.control_rate = control_rate
        self.current_pos_sub = rospy.Subscriber('ArUco_transform', TransformStamped, self.current_pos_callback)
        
    


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
        self.control_rate = control_rate
        self.pub = rospy.Publisher('/stretch/cmd_vel', Twist, queue_size=1) #/stretch_diff_drive_controller/cmd_vel for gazebo
        # Setup the message receiver for the message from ArUco
        self.current_pos_sub = rospy.Subscriber('ArUco_transform', TransformStamped, self.current_pos_callback)
        # TODO: future interface for goal pos messages
        # self.goal_pos_sub = ...
        # store goal_pos
        # self.goal_pos = np.array([-0.5,-0.3,0])
        self.goal_pos = np.array([0.5,0.877,-0.737])
        # self.goal_orien = np.array([0.707,0,0,0.707]) # we use the most common form of w, x, y, z instead of x, y, z, w which is used by msgs.
        self.goal_orien = quaternion_inverse(np.array([0,0,-0.707,0.707]))
        # self.goal_orien = np.array([0,0.5,0.5,0.5])
        self.goal_prev = None
        # time required to reach that goal
        self.t_rotate = 8
        self.t_move = 6
        self.cur_t = rospy.Time.now()
        # store current pos
        # self.current_pos = np.zeros(3)
        self.current_pos = np.array([-0.057,0.877,-0.737])
        self.pos_prev = None
        # self.current_orien = np.array([1,0,0,0])
        self.current_orien = quaternion_inverse(np.array([0,0,-0.707,0.707])) # Assume initial pose is rotated along AR tag's x axis 90 deg.
        # estimated current_pos when there are no feedbacks
        self.current_pos_est = self.current_pos
        self.current_orien_est = self.current_orien
        # status
        self.get_to_goal = False

    def current_pos_callback(self, msg):
        """
        Get the global pose of base link from AR Tag
        We take Ar Tag loc 0 as origin, then the base pose is -p, inv(R) or conjugate quaternion q*
        """
        # TODO: Problem here
        # update current pose
        #rospy.loginfo("in current pos callback")
        self.current_pos[0] = msg.transform.translation.x
        self.current_pos[1] = msg.transform.translation.y
        self.current_pos[2] = msg.transform.translation.z
        self.current_orien[0] = msg.transform.rotation.w
        self.current_orien[1] = msg.transform.rotation.x
        self.current_orien[2] = msg.transform.rotation.y
        self.current_orien[3] = msg.transform.rotation.z
        # align the estimated pose to the ground true value
        self.current_pos_est = self.current_pos
        self.current_orien_est = self.current_orien
        self.goal_pos = deepcopy(self.current_pos)
        self.goal_pos[0] +=0.6
        self.goal_orien = deepcopy(self.current_orien)
        if self.goal_pos_updated():
            self.move_forward()

    def goal_pos_updated(self):
        #rospy.loginfo("judge goal_pos and current_pos updated")
        if self.goal_prev is None and self.pos_prev is None:
            self.goal_prev = self.goal_pos
            self.pos_prev = self.current_pos
            rospy.loginfo("goal_pos and current_pos updated")
            return True
        if self.goal_prev is not None and self.pos_prev is not None:
            if np.array_equal(self.goal_prev,self.goal_pos) or np.array_equal(self.current_pos,self.pos_prev):
                return False
            else:
                self.goal_prev = self.goal_pos
                self.pos_prev = self.current_pos
                rospy.loginfo("goal_pos and current_pos updated")
                return True
        else:
            return False

    def compute_error(self):
        """
        Compute the distance between base link and target point in the frame of base link
        The error is used to set speed
        GPT answer:
        https://chat.openai.com/share/702839df-c611-48e7-a807-38863a9f3fab
        """
        pos_error = np.zeros(4)
        pos_error[1:] = self.goal_pos - self.current_pos_est
        orien_error_local = quaternion_multiply(self.goal_orien, quaternion_inverse(self.current_orien_est))
        pos_error_local = quaternion_multiply(quaternion_multiply(self.current_orien_est, pos_error), quaternion_inverse(self.current_orien_est))
        return pos_error_local[1:], orien_error_local
    
    def move_forward_in_locomotion(self, pos_error):
        dist = np.sqrt(pos_error[0]**2 + pos_error[1]**2)
        rospy.loginfo('distance error in local frame: {}'.format(dist))
        vx = dist / self.t_move
        rospy.loginfo('cotronl command vx: {} \n'.format(vx))
        self.cur_t = rospy.Time.now()
        while (rospy.Time.now()-self.cur_t).to_sec() < self.t_move:
            t = (rospy.Time.now()-self.cur_t).to_sec()
            command = Twist()
            command.linear.x = 0.5*dist*np.pi/self.t_move*np.sin(np.pi/self.t_move*t)
            command.linear.y = 0
            command.linear.z = 0
            command.angular.x = 0
            command.angular.y = 0
            command.angular.z = 0
            self.pub.publish(command)
            rospy.sleep(1/self.control_rate)
        self.cur_t = rospy.Time.now()
        rospy.sleep(0.2)
        # self.publish_cmd_vel(command, self.t_rotate)
        return
    
    def rotate_in_locomotion(self, omega_error):
        rospy.loginfo('oriention error in local frame in deg: {}'.format(omega_error/np.pi*180))
        vomega = omega_error / self.t_rotate
        rospy.loginfo('cotronl command vomega in deg: {} \n'.format(vomega/np.pi*180))
        self.cur_t = rospy.Time.now()
        while (rospy.Time.now()-self.cur_t).to_sec() < self.t_rotate:
            t = (rospy.Time.now()-self.cur_t).to_sec()
            command = Twist()
            command.linear.x = 0
            command.linear.y = 0
            command.linear.z = 0
            command.angular.x = 0
            command.angular.y = 0
            command.angular.z = 0.5*omega_error*np.pi/self.t_rotate*np.sin(np.pi/self.t_rotate*t)
            self.pub.publish(command)
            rospy.sleep(1/self.control_rate)
        self.cur_t = rospy.Time.now()
        rospy.sleep(0.2)
        # self.publish_cmd_vel(command, self.t_rotate)
        return

    def publish_cmd_vel(self, command, t):
        self.cur_t = rospy.Time.now()
        while (rospy.Time.now()-self.cur_t).to_sec() < t:
            self.pub.publish(command)
            rospy.sleep(1/self.control_rate)
        self.cur_t = rospy.Time.now()
        rospy.sleep(0.2)

    def move_forward(self):
        """
        Function that publishes Twist messages
        :param self: The self reference.

        :publishes command: Twist message.
        """
        pos_error, orien_error = self.compute_error()
        rospy.loginfo('goal position: {}, oriention: {}'.format(self.goal_pos, self.goal_orien))
        rospy.loginfo('goal in local: position: {}, oriention: {}'.format(pos_error, orien_error))
        
        # Phase 1, rotate the base to arctan(y/x)
        rospy.loginfo('rotate to face y/x')
        omega_for_move = np.arctan2(pos_error[1], pos_error[0])
        self.rotate_in_locomotion(omega_for_move)
        
        # Phase 2, move toward (x,y) in local frame
        rospy.loginfo('move toward (x,y) in local frame')
        self.move_forward_in_locomotion(pos_error)

        # Phase 3, rotate to the desired orientation
        rospy.loginfo('rotate to the desired orientation')
        omega_error_orig = quaternion_to_euler(orien_error)[2]
        omega_error_total = omega_error_orig - omega_for_move
        self.rotate_in_locomotion(omega_error_total)
        # update estimated current pose, since we donot have feedback

    def if_at_goal(self):
        if np.linalg.norm(self.current_pos-self.goal_pos) > 0.05 \
        or np.linalg.norm(self.current_orien-self.goal_orien) > 0.02:
            self.get_to_goal = False
        else:
            self.get_to_goal = True



if __name__ == '__main__':
    rospy.init_node('move_base_to_global', argv=sys.argv)
    # Declare a `StretchNavigation` object
    mover = Move()
    rate = rospy.Rate(mover.control_rate)
    rospy.spin()