#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Point

def publish_goals():
    # Create a Point message
    base_goal_msg = Point()
    arm_goal_msg = Point()

    # You can set x, y, z values here. For example, setting them to 1.0 for illustration
    base_goal_msg.x = 1.0
    base_goal_msg.y = 1.0
    base_goal_msg.z = 1.0

    arm_goal_msg.x = 1.0
    arm_goal_msg.y = 1.0
    arm_goal_msg.z = 1.0

    # Publish messages
    base_goal_pub.publish(base_goal_msg)
    arm_goal_pub.publish(arm_goal_msg)

if __name__ == '__main__':
    # Initialize the ROS Node
    rospy.init_node('goal_publisher', anonymous=True)

    # Define the publishers for 'base_goal' and 'arm_goal' topics
    base_goal_pub = rospy.Publisher('base_goal', Point, queue_size=10)
    arm_goal_pub = rospy.Publisher('arm_goal', Point, queue_size=10)

    # Define the publishing rate
    rate = rospy.Rate(10)  # 10Hz

    # Set up a timer to call the publish_goals function every 0.1 seconds
    rospy.Timer(rospy.Duration(0.1), lambda event: publish_goals())

    # Keep the node running
    rospy.spin()
