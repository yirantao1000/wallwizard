#!/usr/bin/env python3

# Import modules
import sys
import rospy
import numpy as np
import actionlib

# The Twist message is used to send velocities to the robot base
from geometry_msgs.msg import Twist

from sensor_msgs.msg import JointState

from sensor_msgs.msg import JointState

# The multi array message is used to subscribe brush stroke parameters
from std_msgs.msg import Float64MultiArray

from std_msgs.msg import Float64

# The TransformStamped message is used to subscribe current pose of robot base
from geometry_msgs.msg import TransformStamped
from control_msgs.msg import FollowJointTrajectoryGoal, FollowJointTrajectoryAction
from trajectory_msgs.msg import JointTrajectoryPoint
import hello_helpers.hello_misc as hm
from utils import *
from copy import deepcopy
from stroke_publisher import cubic_bezier
import matplotlib.pyplot as plt

# Global variable control rate for this node
control_rate = 8

WINDOW_LEN = 40

ALIGN_ORIEN = np.array([0,0,-np.sqrt(2)/2,-np.sqrt(2)/2])  # base's x orientation faces global negative x
ALIGN_TRANS = np.array([0, 0, 0.6]) # tune based on the desired arm length and position of base origin
ALIGN_ARM = np.array([0.04964, 0.04964, 0.04964, 0.04964])
LIFT_INIT = 0.79
ARM_INIT = 0.1
ARM_TO_WALL_BIAS = np.sum(ALIGN_ARM) - 0.55#0.57#0.57#0.5535
WRIST_YAW_PAINT = 0.6
WRIST_YAW_STOW = 0.8

# force feedback control parameters
THRESH_LOW = 0.001 #0.09
THRESH_HIGH = 0.09 #5.99
CONTROL_TARGET = (THRESH_LOW + THRESH_HIGH) / 2
K = 0.02 #0.003

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
        self.base_x_pub = rospy.Publisher('/base_x_orien', Float64, queue_size=1) 
        # manipulator publisher
        self.Manipulator_pub = None
        # current pose of base
        self.current_pos = np.array([0.,0.,0.])
        self.joint_states = 0
        self.pos_prev = None
        self.current_orien = np.array([1.,0.,0.,0.])
        self.current_pos_time = 0
        self.current_pos_mean = np.array([0.,0.,0.])
        self.current_orien_mean = np.array([1.,0.,0.,0.])
        self.pos_history = [None] * WINDOW_LEN
        self.orien_history = [None] * WINDOW_LEN
        self.stamp_history = [None] * WINDOW_LEN
        self.hist_stamp = 0
        self.lift_prev_pos = np.array([LIFT_INIT])
        self.arm_prev_pos = np.array([ARM_INIT])

        self.manip_trajectory_client = actionlib.SimpleActionClient('/stretch_controller/follow_joint_trajectory', FollowJointTrajectoryAction)
        rospy.loginfo("try to connect to trajectory client...")
        server_reached = self.manip_trajectory_client.wait_for_server(timeout=rospy.Duration(60.0))
        rospy.loginfo("connect to trajectory client: {}".format(server_reached))

    def pos_updated(self):
        # rospy.loginfo("judge goal_pos and current_pos updated")
        pass1 = False
        if not (rospy.Time.now().to_sec() - self.current_pos_time) < 0.05:
            return False
        if (self.pos_prev is None) and (self.current_pos is not None):
            self.pos_prev = deepcopy(self.current_pos)
            rospy.loginfo("current_pos updated")
            pass1 = True
        elif self.pos_prev is not None:
            # if np.array_equal(self.current_pos,self.pos_prev):
            #     return False
            # else:
            #self.pos_prev = deepcopy(self.current_pos)
            rospy.loginfo("current_pos updated")
            pass1 = True
        # else:
        #     return False
        if pass1:
            if self.hist_stamp < 40:
                return False
            if (np.max(self.stamp_history) - np.min(self.stamp_history)) < 1.1:
                std = np.linalg.norm(np.std(self.pos_history, axis=0))
                if std < 0.015 and std > 0.005:
                    return True
        return False
        

    def filter_pose_after_update(self, time = 2):
        rospy.loginfo("waiting to filter robot pose...")
        while not self.pos_updated():
            continue
        rospy.sleep(time)
        # rospy.loginfo("window stamp: {}".format(self.stamp_history))
        # rospy.loginfo("=============== window time: {}".format(np.max(self.stamp_history) - np.min(self.stamp_history)))
        self.current_pos_mean = np.mean(self.pos_history, axis=0)
        self.current_orien_mean = np.mean(self.orien_history, axis=0)
        rot = []
        for i in range(WINDOW_LEN):
            rot_ = quaternion_rotate(self.orien_history[i], np.array([1.,0.,0.]))
            rot.append(np.arctan2(rot_[2], -rot_[0]))
        # rospy.loginfo(np.linalg.norm(np.std(self.pos_history, axis=0)))
        # print(self.pos_history)
        plt.figure()
        plt.subplot(2,1,1)
        plt.plot(np.array(self.pos_history)[:,0])
        plt.subplot(2,1,2)
        plt.plot(rot)
        plt.show()


    def compute_base_error_local(self, goal_pos, goal_orien):
        rospy.loginfo("compute the base error in local frame: ")
        rospy.loginfo('current position in global frame: {}'.format(self.current_pos_mean))
        rospy.loginfo("current orientation in global frame: {}".format(self.current_orien_mean))
        # while not rospy.is_shutdown():
        base_x = quaternion_rotate(self.current_orien_mean, np.array([1.,0.,0.]))
        base_omega_global = np.arctan2(base_x[2], -base_x[0])
            # msg = Float64()
            # msg.data = base_omega_global/np.pi*180
            # self.base_x_pub.publish(msg)
            # rospy.sleep(0.02)
    
        goal_x = quaternion_rotate(goal_orien, np.array([1.,0.,0.]))
        goal_omega_global = np.arctan2(goal_x[2], -goal_x[0])
        rospy.loginfo("goal orientation in global -x+z plane: {} degree".format(goal_omega_global/np.pi*180))
        omega_local = goal_omega_global - base_omega_global
        rospy.loginfo('goal rotation along base z axis: {} degree'.format(omega_local/np.pi*180))
        # rospy.loginfo("base x orientation in global frame: {}".format(quaternion_rotate(self.current_orien, np.array([1.,0.,0.]))))    
        pos_error = goal_pos - self.current_pos_mean
        rospy.loginfo("pos error in global frame: {}".format(pos_error[1:]))
        # orien_error_local = quaternion_multiply(goal_orien, quaternion_inverse(self.current_orien))
        # pos_error_local = quaternion_multiply(quaternion_multiply(self.current_orien, pos_error), quaternion_inverse(self.current_orien))
        pos_error_local = np.array([self.current_pos_mean[0] - goal_pos[0], goal_pos[2] - self.current_pos_mean[2], 0.])
        # orie_error_local = quaternion_to_euler(goal_orien)[2]
        rospy.loginfo('goal position in local frame: {}'.format(pos_error_local))
        # rospy.loginfo('goal rotation along base z axis: {} degree'.format(quaternion_to_euler(orien_error_local)[2]/np.pi*180))
        return pos_error_local, omega_local

    
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
            rospy.sleep(2/self.control_rate)
        rospy.sleep(0.2)
        return

    def base_move_to(self, goal_pos, goal_orien, t, mode="align"):
        """
        Function that publishes Twist messages
        :param self: The self reference.

        :publishes command: Twist message.
        """
        rospy.loginfo('global goal position: {}, oriention: {}'.format(goal_pos, goal_orien))
        self.filter_pose_after_update(time=2)
        pos_error, _ = self.compute_base_error_local(goal_pos, goal_orien)
        
        # Phase 1, rotate the base to arctan(y/x)
        rospy.loginfo('rotate to face y/x')
        omega_for_move = np.arctan2(pos_error[1], pos_error[0])
        dist = np.sqrt(pos_error[0]**2 + pos_error[1]**2)
        # keep the robot's rotation <= pi/2
        if abs(omega_for_move) > np.pi/2:
            omega_for_move = omega_for_move + np.pi* (1 if omega_for_move < -np.pi/2 else -1)
            dist = - dist
        rospy.loginfo("omega for moving: {}".format(omega_for_move/np.pi*180))
        self.rotate_in_locomotion(omega_for_move, t)
    
        # Phase 2, move toward (x,y) in local frame
        rospy.loginfo('move toward (x,y) in local frame')
        self.move_forward_in_locomotion(dist, t)
        rospy.sleep(1)

        # Phase 3, rotate to the desired orientation
        rospy.loginfo('rotate to the desired orientation')
        # omega_error_orig = quaternion_to_euler(orien_error)[2]
        self.filter_pose_after_update(time=2)
        _, omega_error = self.compute_base_error_local(goal_pos, goal_orien)
        # omega_error_total = omega_error - omega_for_move
        self.rotate_in_locomotion(omega_error, t)
        command = Twist()
        command.linear.x = 0
        command.linear.y = 0
        command.linear.z = 0
        command.angular.x = 0
        command.angular.y = 0
        command.angular.z = 0
        self.base_pub.publish(command)


    def publish_base_cmd(self, command: Twist):
        self.base_pub.publish(command)


    def arm_to_board(self, time=None, command=None):
        trajectory_goal = FollowJointTrajectoryGoal()
        trajectory_goal.trajectory.joint_names = ['joint_arm']
        wrist_index = self.joint_states.name.index("joint_wrist_yaw")
        arm_index3 = self.joint_states.name.index('joint_arm_l3')
        arm_index2 = self.joint_states.name.index('joint_arm_l2')
        arm_index1 = self.joint_states.name.index('joint_arm_l1')
        arm_index0 = self.joint_states.name.index('joint_arm_l0')
            
        if command is not None:
            rospy.loginfo("manipulator command: {}".format(command))
            self.publish_manipulator_cmd(time, command, ['joint_arm'], stop=False)
            self.manip_trajectory_client.wait_for_result()
            low = THRESH_LOW
            while (self.joint_states.effort[wrist_index] < low or self.joint_states.effort[wrist_index] > THRESH_HIGH):
                arm_current_pos = self.joint_states.position[arm_index0] + self.joint_states.position[arm_index1] + self.joint_states.position[arm_index2] + self.joint_states.position[arm_index3]
                err = K*(CONTROL_TARGET - self.joint_states.effort[wrist_index])
                cmd = arm_current_pos + err
                rospy.loginfo('arm cmd: {}'.format(cmd))
                if err < 0:
                    low = -0.001
                self.publish_manipulator_cmd(1/self.control_rate, np.array([cmd]), ['joint_arm'])
                self.manip_trajectory_client.wait_for_result()
                rospy.sleep(1/self.control_rate)
                rospy.loginfo('arm forward! Effort: {}'.format(self.joint_states.effort[wrist_index]))
                
            # self.publish_manipulator_cmd(1/self.control_rate, np.array([cmd]), ['joint_arm'])
        # else:
        #     if self.joint_states.effort[wrist_index] < THRESH_LOW:# or self.joint_states.effort[wrist_index] > THRESH_HIGH):
        #         arm_current_pos = self.joint_states.position[arm_index0] + self.joint_states.position[arm_index1] + self.joint_states.position[arm_index2] + self.joint_states.position[arm_index3]
        #         cmd = arm_current_pos + K*(CONTROL_TARGET - self.joint_states.effort[wrist_index])
        #         self.publish_manipulator_cmd(1/self.control_rate, np.array([cmd]), ['joint_arm'])
        



    def publish_manipulator_cmd(self, time, command, joints=['joint_lift'], stop=False):
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

        if joints == ['joint_lift']:
            #point0.velocities = [(command-self.lift_prev_pos) / time]
            self.lift_prev_pos = command
        else:
            #point0.velocities = [(command-self.arm_prev_pos) / time]
            self.arm_prev_pos = command

        # point1 = JointTrajectoryPoint()
        # point1.positions = [0.5]

        trajectory_goal.trajectory.points = [point0] #, point1]
        trajectory_goal.trajectory.header.stamp = rospy.Time.now() #TODO
        trajectory_goal.trajectory.header.frame_id = 'base_link' #TODO
        self.manip_trajectory_client.send_goal(trajectory_goal)
        #rospy.loginfo('Sent goal = {0}'.format(trajectory_goal))
        #self.manip_trajectory_client.wait_for_result()


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
        self.joint_state_sub = rospy.Subscriber('joint_states', JointState, self.joint_state_callback)
        self.mode = None
        self.t_align = 8
        self.t_paint = 15
        # global polinomial path, calculated from FRIDA
        self.global_path_param = [] # e.g. y=x^2
        self.current_path_param = None
        self.global_start_point = None # to record the planned trajectory, use to test if the trajectory matches the path 
        # ---Engineering parameters for align (calibration)---
        self.align_orien = ALIGN_ORIEN
        self.align_trans = ALIGN_TRANS
        self.arm_to_wall_bias = ARM_TO_WALL_BIAS
        
    def joint_state_callback(self, msg):
        index = msg.name.index("joint_wrist_yaw")
        self.wrist_effort = msg.effort[index]
        self.robot.joint_states = msg

    def brush_stroke_callback(self, msg):
        data = np.array(msg.data).reshape(-1, 2)  # Reshape into N rows of 2 columns
        # Convert back to list of numpy arrays
        original_data = [np.array(point) for point in data]
        self.global_path_param.append(original_data)
        

        
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

        self.robot.current_pos_time = rospy.Time.now().to_sec()

        stamp = self.robot.hist_stamp % len(self.robot.pos_history)
        self.robot.pos_history[stamp] = list(deepcopy(self.robot.current_pos))
        self.robot.orien_history[stamp] = list(deepcopy(self.robot.current_orien))
        self.robot.stamp_history[stamp] = self.robot.current_pos_time
        # rospy.loginfo(self.robot.current_pos_time)
        self.robot.hist_stamp += 1
        if self.robot.hist_stamp == 2 * WINDOW_LEN:
            self.robot.hist_stamp = 0

        #rospy.loginfo("pos std: {}".format(np.linalg.norm(np.std(self.robot.pos_history, axis=0))))   
        
        # rospy.loginfo("in current_pos_callback, orien: {}".format(self.robot.current_orien))

    # def brush_stroke_request(self):
    #     if len(self.global_path_param) == 0:
    #         return False
    #     start_x = self.global_path_param[0][-2]
    #     end_x = self.global_path_param[0][-1]
    #     # define an arbitrary set of path parameters for test
    #     start_y = 0
    #     end_y = 0
    #     # generate start point and end point of stroke
    #     for i in range(self.global_path_param[0].shape[0]-2):
    #         start_y += self.global_path_param[0][i] * np.power(start_x, i)
    #     self.global_path_points.append(np.array([start_x,start_y,0]))
    #     for i in range(self.global_path_param[0].shape[0]-2):
    #         end_y += self.global_path_param[0][i] * np.power(end_x, i)
    #     self.global_path_points.append(np.array([end_x,end_y,0]))
    #     self.global_path_param.pop(0)
    #     return True

    def brush_stroke_request(self):
        if len(self.global_path_param) == 0:
            return False
        self.current_path_param = self.global_path_param[0]
        self.global_path_param.pop(0)
        self.global_start_point = np.array([self.current_path_param[0][0], self.current_path_param[0][1], 0])
        return True
        

    def align_with_start_point(self):
        """
        Move both base and brush stroke to align with the starting point of brush troke
        """
        rospy.loginfo("align base to starting point")
          
        # calibrate the manipulator configuration
        base_global_goal = self.global_start_point + self.align_trans
        self.robot.base_move_to(base_global_goal, self.align_orien, t=self.t_align, mode="align")
        self.mode = "paint"


    # def execute_local_trajectory_for_painting(self):
    #     # compute base trajectory, assume the robot is already aligned
    #     # self.robot.filter_pose_after_update(time=2)
    #     rospy.loginfo("stroke end point in global frame: {}".format(self.global_path_points[-1]))
    #     base_pos_error, _ = self.robot.compute_base_error_local(self.global_path_points[-1], self.robot.current_orien) # DO NOT rotate
    #     dist = base_pos_error[0]
    #     # if base_pos_error[0] < 0:  # if moving towards the global positive x direction
    #         # dist = -dist
    #     cur_t = rospy.Time.now()
    #     while (rospy.Time.now()-cur_t).to_sec() < self.t_paint:
    #         t = (rospy.Time.now()-cur_t).to_sec()
    #         command_base, command_manipulator= self.generate_local_command(self.t_paint, t, dist)
    #         self.robot.publish_base_cmd(command_base)
    #         self.robot.arm_to_board()
    #         self.robot.publish_manipulator_cmd(1/self.control_rate, np.array([command_manipulator]))
    #         rospy.sleep(1/self.control_rate)
    #     # self.global_path_param.pop(0)
    #     command = Twist()
    #     command.linear.x = 0
    #     command.linear.y = 0
    #     command.linear.z = 0
    #     command.angular.x = 0
    #     command.angular.y = 0
    #     command.angular.z = 0
    #     self.robot.base_pub.publish(command)
    #     self.mode = "align"


    # def generate_local_command(self, T, t, dist):
    #     # vx_base = 0.5*dist*np.pi/T*np.sin(np.pi/T*t)
    #     vx_base = dist / T
    #     x_base_local = vx_base*t
    #     # x_base_local = 0.5*dist - 0.5*dist*np.cos(np.pi/T*t)
    #     global_move_est = np.array([-x_base_local, 0, 0])
    #     pos_global_est = global_move_est + self.robot.current_pos_mean
    #     y_manip = 0
    #     for i in range(self.global_path_param[0].shape[0]-2):
    #         y_manip += self.global_path_param[0][i] * np.power(pos_global_est[0], i)
    #     brush_global_pos = np.array([pos_global_est[0],y_manip,0])
    #     self.global_path_points.insert(-1, brush_global_pos)
    #     # TODO: generate manipulator trajectory pos and vel
    #     command_manipulator_lift = y_manip - pos_global_est[1]
    #     command_base = Twist()
    #     command_base.linear.x = vx_base
    #     command_base.linear.y = 0
    #     command_base.linear.z = 0
    #     command_base.angular.x = 0
    #     command_base.angular.y = 0
    #     command_base.angular.z = 0
    #     """
    #     contact force error = current force - desired force mean
    #     if error out of certain range:
    #         setting a position/velocity signal, cmd = f(error)
    #         f(error) can be certain simple control law
    #     """
    #     return command_base, command_manipulator_lift

    def execute_local_trajectory_for_painting(self):
        # compute base trajectory, assume the robot is already aligned
        # self.robot.filter_pose_after_update(time=2)
        # rospy.loginfo("stroke end point in global frame: {}".format(self.global_path_points[-1]))
        cur_x = self.current_path_param[0][0]
        cur_t = rospy.Time.now()
        while (rospy.Time.now()-cur_t).to_sec() < self.t_paint:
            t = (rospy.Time.now()-cur_t).to_sec() / self.t_paint
            command_base, command_manipulator, new_x = self.generate_local_command(t, cur_x)
            cur_x = new_x
            self.robot.publish_base_cmd(command_base)
            self.robot.arm_to_board()
            self.robot.publish_manipulator_cmd(1/self.control_rate, np.array([command_manipulator]))
            rospy.sleep(1/self.control_rate)
        # self.current_path_param.pop(0)
        command = Twist()
        command.linear.x = 0
        command.linear.y = 0
        command.linear.z = 0
        command.angular.x = 0
        command.angular.y = 0
        command.angular.z = 0
        self.robot.base_pub.publish(command)
        self.mode = "align"

    def generate_local_command(self, t, cur_x):
        p = cubic_bezier(t, self.current_path_param[0], self.current_path_param[1],\
                         self.current_path_param[2], self.current_path_param[3])
        vx_base = -(p[0] - cur_x) * self.control_rate
        y_manip = p[1]
        # TODO: make self.robot.current_pos_mean[1] a constant
        command_manipulator_lift = y_manip - self.robot.current_pos_mean[1]
        command_base = Twist()
        command_base.linear.x = vx_base
        command_base.linear.y = 0
        command_base.linear.z = 0
        command_base.angular.x = 0
        command_base.angular.y = 0
        command_base.angular.z = 0
        """
        contact force error = current force - desired force mean
        if error out of certain range:
            setting a position/velocity signal, cmd = f(error)
            f(error) can be certain simple control law
        """
        return command_base, command_manipulator_lift, p[0]
    


if __name__ == '__main__':
    rospy.init_node('planner_mover', argv=sys.argv)    
    planner = TrajectoryPlanner()
    rate = rospy.Rate(planner.control_rate)
    rospy.sleep(2)
    prev_param = np.array([0.,0.,0.,0.,0.])
    while not rospy.is_shutdown():
        rospy.loginfo("====== doing {} ======".format(planner.mode))
        if len(planner.global_path_param) == 0:
            continue
        prev_param = deepcopy(planner.global_path_param[0])
        if planner.mode is None or planner.mode == "align":
            if not planner.brush_stroke_request():
                rospy.loginfo("new stroke not received")
                continue
            rospy.loginfo("\n")
            rospy.loginfo("align robot to starting point")
            rospy.loginfo("current stroke control points: {}".format(planner.current_path_param))
            rospy.loginfo("current starting point: {}".format(planner.global_start_point))
            # planner.robot.publish_manipulator_cmd(planner.t_align, np.array([LIFT_INIT]))
            # planner.robot.manip_trajectory_client.wait_for_result()
            planner.robot.publish_manipulator_cmd(planner.t_align, np.array([0]), joints=['joint_arm'])
            planner.robot.manip_trajectory_client.wait_for_result()
            rospy.sleep(planner.t_align)
            planner.align_with_start_point()
            rospy.sleep(planner.t_align)
            planner.robot.filter_pose_after_update(time=4)
            planner.robot.publish_manipulator_cmd(planner.t_align, np.array([planner.current_path_param[0][1] - planner.robot.current_pos_mean[1]]))
            planner.robot.manip_trajectory_client.wait_for_result()
            rospy.sleep(planner.t_align)
            # tilt the wrist a little
            planner.robot.publish_manipulator_cmd(planner.t_align, [WRIST_YAW_PAINT], joints=['joint_wrist_yaw'])
            planner.robot.manip_trajectory_client.wait_for_result()
            rospy.loginfo("tilted wrist!")

            # # TODO: question here: current_pos[2] is actually not the pose at current time.
            planner.robot.arm_to_board(planner.t_align, np.array([planner.arm_to_wall_bias + planner.robot.current_pos_mean[2]]))
            planner.robot.manip_trajectory_client.wait_for_result()
            rospy.loginfo("aligned to the start point of stroke...")
            rospy.sleep(planner.t_align)
        if planner.mode == "paint":
            rospy.loginfo("\n")
            rospy.loginfo("paint the stroke")
            planner.execute_local_trajectory_for_painting()
            rospy.sleep(1)
            planner.robot.publish_manipulator_cmd(planner.t_align, [WRIST_YAW_STOW], joints=['joint_wrist_yaw'])
            # planner.robot.manip_trajectory_client.wait_for_result()
            planner.robot.publish_manipulator_cmd(planner.t_align, np.array([0]), joints=['joint_arm'])
            planner.robot.manip_trajectory_client.wait_for_result()
        # rospy.sleep(1)
    # rospy.spin()