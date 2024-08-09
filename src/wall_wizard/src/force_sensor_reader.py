#!/usr/bin/env python
import rospy
from sensor_msgs.msg import JointState
from control_msgs.msg import FollowJointTrajectoryGoal, FollowJointTrajectoryAction
from trajectory_msgs.msg import JointTrajectoryPoint
import actionlib

def publish_manipulator_cmd(manip_trajectory_client, time, command, joints=['joint_lift'], stop=False):
    """
    Function that makes an action call and sends joint trajectory goals
    to a single joint
    :param self: The self reference. command is an np array
    """
    # rospy.loginfo("publish manipulator command to {}".format(joints))
    trajectory_goal = FollowJointTrajectoryGoal()
    trajectory_goal.trajectory.joint_names = joints

    point0 = JointTrajectoryPoint()
    point0.positions = command
    if stop:
        point0.velocities = [0]

    trajectory_goal.trajectory.points = [point0] #, point1]
    trajectory_goal.trajectory.header.stamp = rospy.Time.now() #TODO
    trajectory_goal.trajectory.header.frame_id = 'base_link' #TODO
    manip_trajectory_client.send_goal(trajectory_goal)

def joint_state_callback(msg):
    index = msg.name.index("joint_wrist_yaw")
    rospy.loginfo('the force on the gripper {}'.format(msg.effort[index]))


def listener():
    # Initialize the node
    rospy.init_node('force_sensor_reader', anonymous=True)
    manip_trajectory_client = actionlib.SimpleActionClient('/stretch_controller/follow_joint_trajectory', FollowJointTrajectoryAction)
    rospy.loginfo("try to connect to trajectory client...")
    server_reached = manip_trajectory_client.wait_for_server(timeout=rospy.Duration(60.0))
    rospy.loginfo("connect to trajectory client: {}".format(server_reached))
    
    publish_manipulator_cmd(manip_trajectory_client, 8, [0.25], joints=['joint_wrist_yaw'])
    manip_trajectory_client.wait_for_result()
    rospy.loginfo("tilted wrist!")
    
    # Create a subscriber object that listens to the 'joint_states' topic
    rospy.Subscriber("joint_states", JointState, joint_state_callback)
    
    # Keep the program alive
    rospy.spin()

if __name__ == '__main__':
    listener()
