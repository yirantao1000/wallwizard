#!/usr/bin/env python3

# Import modules
import sys
import rospy
import numpy as np
import actionlib

# The Twist message is used to send velocities to the robot base
from geometry_msgs.msg import Twist

# The multi array message is used to subscribe brush stroke parameters
from std_msgs.msg import Float64MultiArray

# The TransformStamped message is used to subscribe current pose of robot base
from geometry_msgs.msg import TransformStamped
from control_msgs.msg import FollowJointTrajectoryGoal, FollowJointTrajectoryAction
from trajectory_msgs.msg import JointTrajectoryPoint
import hello_helpers.hello_misc as hm
from utils import *
from copy import deepcopy

# Global variable control rate for this node
control_rate = 40

ALIGN_ORIEN = np.array([0,0,np.sqrt(2)/2,np.sqrt(2)/2])  # base's x orientation faces global negative x
ALIGN_TRANS = np.array([0, 0, 0.64]) # tune based on the desired arm length and position of base origin
ALIGN_ARM = np.array([0.04964, 0.04964, 0.04964, 0.04964])
LIFT_INIT = 0.79
ARM_INIT = 0.1
ARM_TO_WALL_BIAS = np.sum(ALIGN_ARM) - 0.57


class Robot():
    """
    A class that sends Twist messages to move the Stretch robot forward.
    """
    def __init__(self):
        """
        Function that initializes the publisher.
        :param self: The self reference.
        """        
        self.control_rate = control_rate
        # base velocity command publisher
        self.base_pub = rospy.Publisher('/stretch/cmd_vel', Twist, queue_size=1) #/stretch_diff_drive_controller/cmd_vel for gazebo
        # manipulator publisher
        self.Manipulator_pub = None
        # current pose of base
        self.current_pos = np.zeros(3)
        self.pos_prev = None
        self.current_orien = np.array([1.,0.,0.,0.])
        self.lift_prev_pos = np.array([LIFT_INIT])
        self.arm_prev_pos = np.array([ARM_INIT])

        self.manip_trajectory_client = actionlib.SimpleActionClient('/stretch_controller/follow_joint_trajectory', FollowJointTrajectoryAction)
        server_reached = self.manip_trajectory_client.wait_for_server(timeout=rospy.Duration(60.0))
    
    def pos_updated(self):
        # rospy.loginfo("judge goal_pos and current_pos updated")
        if self.pos_prev is None:
            self.pos_prev = deepcopy(self.current_pos)
            rospy.loginfo("current_pos updated")
            return True
        elif self.pos_prev is not None:
            if np.array_equal(self.current_pos,self.pos_prev):
                return False
            else:
                self.pos_prev = deepcopy(self.current_pos)
                rospy.loginfo("current_pos updated")
                return True
        else:
            return False


    def compute_base_error_local(self, goal_pos, goal_orien):
        pos_error = np.zeros(4)
        pos_error[1:] = goal_pos - self.current_pos
        rospy.loginfo("current orientation: {}".format(self.current_orien))
        orien_error_local = quaternion_multiply(goal_orien, quaternion_inverse(self.current_orien))
        pos_error_local = quaternion_multiply(quaternion_multiply(self.current_orien, pos_error), quaternion_inverse(self.current_orien))
        rospy.loginfo('goal in local: position: {}, oriention: {}'.format(pos_error_local[1:], orien_error_local))
        return pos_error_local[1:], orien_error_local

    
    def move_forward_in_locomotion(self, dist, T):
        rospy.loginfo('distance error in local frame: {}'.format(dist))
        cur_t = rospy.Time.now()
        while (rospy.Time.now()-cur_t).to_sec() < T:
            t = (rospy.Time.now()-cur_t).to_sec()
            command = self.generate_base_command_forward(T, t, dist)
            self.base_pub.publish(command)
            rospy.sleep(1/self.control_rate)
        rospy.sleep(0.2)
        return
    
    def rotate_in_locomotion(self, omega_error, T):
        rospy.loginfo('oriention error in local frame in deg: {}'.format(omega_error/np.pi*180))
        cur_t = rospy.Time.now()
        while (rospy.Time.now()-cur_t).to_sec() < T:
            t = (rospy.Time.now()-cur_t).to_sec()
            command = self.generate_base_command_rotate(T, t, omega_error)
            self.base_pub.publish(command)
            rospy.sleep(1/self.control_rate)
        rospy.sleep(0.2)
        return

    def base_move_to(self, goal_pos, goal_orien, t, mode="align"):
        """
        Function that publishes Twist messages
        :param self: The self reference.

        :publishes command: Twist message.
        """
        rospy.loginfo("moving mode: {}".format(mode))
        rospy.loginfo('goal position: {}, oriention: {}'.format(goal_pos, goal_orien))
        rospy.loginfo('current position: {}'.format(self.current_pos))
        pos_error, orien_error = self.compute_base_error_local(goal_pos, goal_orien)
        
        # Phase 1, rotate the base to arctan(y/x)
        if mode == "align":
            rospy.loginfo('rotate to face y/x')
            omega_for_move = np.arctan2(pos_error[1], pos_error[0])
            dist = np.sqrt(pos_error[0]**2 + pos_error[1]**2)
            # keep the robot's rotation <= pi/2
            if abs(omega_for_move) > np.pi/2:
                omega_for_move = omega_for_move + np.pi* (1 if omega_for_move < -np.pi/2 else -1)
                dist = - dist
            self.rotate_in_locomotion(omega_for_move, t)
        
            # Phase 2, move toward (x,y) in local frame
            rospy.loginfo('move toward (x,y) in local frame')
            self.move_forward_in_locomotion(dist, t)

            # Phase 3, rotate to the desired orientation
            rospy.loginfo('rotate to the desired orientation')
            omega_error_orig = quaternion_to_euler(orien_error)[2]
            omega_error_total = omega_error_orig - omega_for_move
            self.rotate_in_locomotion(omega_error_total, t)


    def publish_base_cmd(self, command: Twist):
        self.base_pub.publish(command)

    def publish_manipulator_cmd(self, time, command, joints=['joint_lift']):
        """
        Function that makes an action call and sends joint trajectory goals
        to a single joint
        :param self: The self reference. command is an np array
        """
        trajectory_goal = FollowJointTrajectoryGoal()
        trajectory_goal.trajectory.joint_names = joints

        point0 = JointTrajectoryPoint()
        point0.positions = command
        if joints == ['joint_lift']:
            point0.velocities = [(command-self.lift_prev_pos) / time]
            self.lift_prev_pos = command
        else:
            point0.velocities = [(command-self.arm_prev_pos) / time]
            self.arm_prev_pos = command

        # point1 = JointTrajectoryPoint()
        # point1.positions = [0.5]

        trajectory_goal.trajectory.points = [point0]#, point1]
        trajectory_goal.trajectory.header.stamp = rospy.Time.now() #TODO
        trajectory_goal.trajectory.header.frame_id = 'base_link' #TODO
        self.manip_trajectory_client.send_goal(trajectory_goal)
        #rospy.loginfo('Sent goal = {0}'.format(trajectory_goal))
        self.manip_trajectory_client.wait_for_result()


    def generate_base_command_forward(self, T, t, dist):
        vx = 0.5*dist*np.pi/T*np.sin(np.pi/T*t)
        command = Twist()
        command.linear.x = vx
        command.linear.y = 0
        command.linear.z = 0
        command.angular.x = 0
        command.angular.y = 0
        command.angular.z = 0
        return command
    
    def generate_base_command_rotate(self, T, t, omega):
        command = Twist()
        command.linear.x = 0
        command.linear.y = 0
        command.linear.z = 0
        command.angular.x = 0
        command.angular.y = 0
        command.angular.z = 0.5*omega*np.pi/T*np.sin(np.pi/T*t)
        return command
    



class TrajectoryPlanner:
    def __init__(self):
        self.control_rate = control_rate
        # The brush_stroke message can be an array [a,b,c, x0, x1] a,b,c are path params, depending on the dimension we want
        # x0, x1 are starting and end x coordination.
        self.robot = Robot()
        self.stroke_param_sub = rospy.Subscriber('brush_stroke', Float64MultiArray, self.brush_stroke_callback)
        self.current_pos_sub = rospy.Subscriber('ArUco_transform', TransformStamped, self.current_pos_callback)
        self.mode = None
        self.t_align = 8
        self.t_paint = 6
        # global polinomial path, calculated from FRIDA
        self.global_path_param = np.array([0,0,1]) # e.g. y=x^2
        self.global_path_points = [] # to record the planned trajectory, use to test if the trajectory matches the path 
        # ---Engineering parameters for align (calibration)---
        self.align_orien = ALIGN_ORIEN
        self.align_trans = ALIGN_TRANS
        self.arm_to_wall_bias = ARM_TO_WALL_BIAS

    def brush_stroke_callback(self, msg):
        """
        Assume brush stroke is published to this node at a high rate with repeated messages.
        """
        # initalize the trajectory recorder
        self.global_path_points = []
        # receive the message
        self.global_path_param = np.array(msg.data[:-2])
        start_x = msg.data[-2]
        end_x = msg.data[-1]
        # define an arbitrary set of path parameters for test
        start_y = 0
        end_y = 0
        # generate start point and end point of stroke
        for i in range(self.global_path_param.shape[0]):
            start_y += self.global_path_param[i] * np.power(start_x, i)
        self.global_path_points.append(np.array([start_x,start_y,0]))
        for i in range(self.global_path_param.shape[0]):
            end_y += self.global_path_param[i] * np.power(end_x, i)
        self.global_path_points.append(np.array([end_x,end_y,0]))
        """
        Haha! What the hell am I coding?
        OK. The first time brush stroke received in rospy.spin(), mode is None, then robot will do align.
        If at this moment the pos is not received, mode does not change and goes back to rospy.spin().
        If the pos is received, robot aligns to the canvas and mode is changed to "paint". Goes back to spin().
        Then this callback see the mode is "paint", would go to execute painting trajectory, and change mode back to "align".
        TODO: How to judge if the brush stroke is updated to make sure every stroke is executed only once.
        """
        if self.mode is None or self.mode == "align":
            rospy.loginfo("\n")
            rospy.loginfo("align robot to starting point")
            self.robot.publish_manipulator_cmd(self.t_align/2, np.array([0]), joints=['joint_arm'])
            rospy.sleep(self.t_align/2)
            self.align_with_start_point()
            rospy.sleep(self.t_align/2)
            self.robot.publish_manipulator_cmd(self.t_align/2, np.array([start_y - self.robot.current_pos[1]]))
            rospy.sleep(self.t_align/2+1)
            # TODO: question here: current_pos[2] is actually not the pose at current time.
            self.robot.publish_manipulator_cmd(self.t_align/2, np.array([self.arm_to_wall_bias + self.robot.current_pos[2]]), joints=['joint_arm'])
            rospy.loginfo("aligned to the start point of stroke...")
            rospy.sleep(self.t_align/2+1)
        if self.mode == "paint":
            rospy.loginfo("\n")
            rospy.loginfo("paint the stroke")
            self.execute_local_trajectory_for_painting()

        
    def current_pos_callback(self, msg):
        """
        Get the global pose of base link from AR Tag
        We take Ar Tag loc 0 as origin, then the base pose is -p, inv(R) or conjugate quaternion q*
        """
        self.robot.current_pos[0] = msg.transform.translation.x
        self.robot.current_pos[1] = msg.transform.translation.y
        self.robot.current_pos[2] = msg.transform.translation.z
        self.robot.current_orien[0] = msg.transform.rotation.w
        self.robot.current_orien[1] = msg.transform.rotation.x
        self.robot.current_orien[2] = msg.transform.rotation.y
        self.robot.current_orien[3] = msg.transform.rotation.z

        # rospy.loginfo("in current_pos_callback, orien: {}".format(self.robot.current_orien))


    def align_with_start_point(self):
        """
        Move both base and brush stroke to align with the starting point of brush troke
        """
        if self.robot.pos_updated():
            # calibrate the manipulator configuration
            base_global_goal = self.global_path_points[0] + self.align_trans
            self.robot.base_move_to(base_global_goal, self.align_orien, t=self.t_align, mode="align")
            self.mode = "paint"


    def execute_local_trajectory_for_painting(self):
        # compute base trajectory, assume the robot is already aligned
        if not self.robot.pos_updated():
            return
        rospy.loginfo("stroke end point in global frame: {}".format(self.global_path_points[-1]))
        base_pos_error, _ = self.robot.compute_base_error_local(self.global_path_points[-1], self.robot.current_orien) # DO NOT rotate
        dist = base_pos_error[0]
        # if base_pos_error[0] < 0:  # if moving towards the global positive x direction
            # dist = -dist
        cur_t = rospy.Time.now()
        while (rospy.Time.now()-cur_t).to_sec() < self.t_paint:
            t = (rospy.Time.now()-cur_t).to_sec()
            command_base, command_manipulator= self.generate_local_command(self.t_paint, t, dist)
            self.robot.publish_base_cmd(command_base)
            # self.robot.publish_manipulator_cmd(1/self.control_rate, np.array([command_manipulator]))
            rospy.sleep(1/self.control_rate)
        self.mode = "align"


    def generate_local_command(self, T, t, dist):
        vx_base = 0.5*dist*np.pi/T*np.sin(np.pi/T*t)
        x_base_local = 0.5*dist - 0.5*dist*np.cos(np.pi/T*t)
        global_move_est = np.array([-x_base_local, 0, 0])
        pos_global_est = global_move_est + self.robot.current_pos
        y_manip = 0
        for i in range(self.global_path_param.shape[0]):
            y_manip += self.global_path_param[i] * np.power(pos_global_est[0], i)
        brush_global_pos = np.array([pos_global_est[0],y_manip,0])
        self.global_path_points.insert(-1, brush_global_pos)
        # TODO: generate manipulator trajectory pos and vel
        command_manipulator_lift = y_manip - pos_global_est[1]
        command_base = Twist()
        command_base.linear.x = vx_base
        command_base.linear.y = 0
        command_base.linear.z = 0
        command_base.angular.x = 0
        command_base.angular.y = 0
        command_base.angular.z = 0
        return command_base, command_manipulator_lift




        


if __name__ == '__main__':
    rospy.init_node('planner_mover', argv=sys.argv)    
    planner = TrajectoryPlanner()
    rate = rospy.Rate(planner.control_rate)
    while not rospy.is_shutdown():
        rospy.loginfo(planner.robot.current_pos)
    # rospy.spin()