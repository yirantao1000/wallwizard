# Import modules
import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import minimize

import sys
import rospy
import numpy as np

# The multi array message is used to subscribe brush stroke parameters
from std_msgs.msg import Float64MultiArray


from utils import *

# Global variable control rate for this node
control_rate = 1
y_offset = 0.4
t_values = np.linspace(0, 1, 10)
# Define the cubic Bezier curve calculation function
def cubic_bezier(t, P0, P1, P2, P3):
    return (1 - t)**3 * P0 + 3*(1 - t)**2 * t * P1 + 3*(1 - t) * t**2 * P2 + t**3 * P3


# Define the objective function for optimization
def objective(control_points, fixed_points, t_values):
    P1, P2 = control_points.reshape(2, 2)
    P0, P3 = fixed_points
    points_on_curve = np.array([cubic_bezier(t, P0, P1, P2, P3) for t in t_values])
    return np.sum((points_on_curve - data_points[:, :2])**2)

# Number of data points to use for t

if __name__ == '__main__':
    rospy.init_node('stroke_publisher', argv=sys.argv)
    rate = rospy.Rate(control_rate)
    stroke_publisher = rospy.Publisher('brush_stroke', Float64MultiArray, queue_size=10)
    counter = 0
    rospy.sleep(10)
    # [0, -0.5, 0, 0.2, 0.8],
    # [0.5,-1,0,0.5,1],
    parameters = [[0.5,-1,0,0.5,1], [0.3, 0.536, -1.33, 0.7, 1], [0, -1, 0, 0.7, 0.3], [-0.5, 0.1, 0, 0.2, 0.8],
                  [-0.0403, 0.536, -1.33, 0.2, 0.8], [0, -1, 0, 0.7, 0.3], [-0.5, 0.1, 0, 0.2, 0.8],
                  [-0.0403, 0.536, -1.33, 0.2, 0.8], [0, -1, 0, 0.7, 0.3], [-0.5, 0.1, 0, 0.2, 0.8]]
    # TODO generate points from npy
    Points = np.zeros((400,10,3))
    parameters = []
    
    data = np.load('../stored_data/all_movements_cat2.npy')
    for i in range(data.shape[0]):
        # Separate the points into x, y, and z components
        data_points = data[i, :, :2]  # Taking only the x and y coordinates
        # stroke[:,1] = 0.6 - stroke[:,1] + y_offset
        data_points[:,1] = 0.6 - data_points[:,1] + y_offset

        # Initial guess for control points P1 and P2
        initial_guess = np.vstack((data_points[2], data_points[-3]))  # Just a heuristic initial guess

        # Optimizing to find the best P1 and P2
        result = minimize(objective, initial_guess.flatten(), args=([data_points[0], data_points[-1]], t_values))
        
        if result.success:
            P1, P2 = result.x.reshape(2, 2)
        else:
            print(f"Optimization failed for stroke {i}")
            continue
        P0, P3 = data_points[0], data_points[-1]
        if not (P0[0]<0.18 or P0[0]>0.49 or P0[1]<0.45 or P0[1]>0.7):
            parameters.append([P0, P1, P2, P3])
        bezier_points = np.array([cubic_bezier(t, P0, P1, P2, P3) for t in np.linspace(0, 1, 100)])
        # print(bezier_points.shape
        plt.plot(data_points[:,0],data_points[:,1], color='b', linewidth = 1)
        # plt.plot(bezier_points[:,0],bezier_points[:,1], color='r', linewidth = 1)
    plt.axis('equal')
    plt.show()

    long_strokes = []
    for stroke in parameters:
        if np.linalg.norm(stroke[0] - stroke[3]) > 0.01:
            long_strokes.append(stroke)
    parameters = []
    parameters = long_strokes
    
    print("here")
    threshold = 0.04
    i = 0
    while i < len(parameters):
        current_curve = parameters[i]
        closest_curve = None
        min_dist = np.inf
        min_index = -1

        if current_curve[0][0] > 0.4:
            i += 1
            continue
        elif current_curve[0][1] > 0.55 and current_curve[0][0]>0.22:
            threshold = 0.035
        else:
            threshold = 0.035
        # Find the closest curve
        for j in range(i + 1, len(parameters)):
            dist = min([np.linalg.norm(current_curve[3] - parameters[j][0]), np.linalg.norm(current_curve[0] - parameters[j][0])])
            if dist < min_dist:
                min_dist = dist
                closest_curve = parameters[j]
                min_index = j

        # Check if the closest curve is within the merging threshold
        if min_dist < threshold:
            # Compute new control points by averaging
            # new_P1 = (current_curve[2] + closest_curve[1]) / 2
            if dist == np.linalg.norm(current_curve[3] - parameters[j][0]):
                new_P1 = (current_curve[1] + current_curve[2] + current_curve[3]) / 3
                new_P2 = (current_curve[3] + closest_curve[1] + closest_curve[2]) / 3
                # new_P2 = (current_curve[3] + closest_curve[2]) / 2
                new_P3 = closest_curve[3]
                # new_curve = {'P0': current_curve['P0'], 'P1': current_curve['P1'], 'P2': new_P1, 'P3': new_P2}
                new_curve = [current_curve[0], new_P1, new_P2, closest_curve[3]]
                # Replace the current curve with the new merged curve and remove the closest one
                parameters[i] = new_curve
                parameters.pop(min_index)
            else:
                new_P1 = (current_curve[2] + current_curve[1] + current_curve[0]) / 3
                new_P2 = (current_curve[0] + closest_curve[1] + closest_curve[2]) / 3
                new_curve = [current_curve[3], new_P1, new_P2, closest_curve[3]]
                parameters.pop(min_index)
            # Do not increment i to check if the newly formed curve can merge again
        else:
            i += 1
            
    
    print(len(parameters))

    transformed_parameters = []
        # Calculate the centroid
    centroid = np.mean(np.mean(np.array(parameters), axis=0, keepdims=False), axis=0, keepdims=False)
    for stroke in parameters:
        # Scale around the centroid
        scaled_stroke = 2 * (stroke - centroid) + centroid
        
        # Translate the centroid of the scaled stroke to (-0.2, -0.5)
        new_centroid = np.array([0, -0.6])
        translation_vector = new_centroid - centroid
        translated_stroke = scaled_stroke + translation_vector
        
        # Append the transformed stroke to the list
        transformed_parameters.append(translated_stroke)
        
    plt.figure()
    # plt.subplot(1,2,1)
    for param in transformed_parameters:
        bezier_points = np.array([cubic_bezier(t, param[0], param[1], param[2], param[3]) for t in np.linspace(0, 1, 100)])
        plt.plot(bezier_points[:,0],bezier_points[:,1], color='r', linewidth = 1)
    plt.axis('equal')
    # plt.subplot(1,2,2)
    # for i in range(data.shape[0]):
    #     data_points = data[i, :, :2]  # Taking only the x and y coordinates
    #     # stroke[:,1] = 0.6 - stroke[:,1] + y_offset
    #     data_points[:,1] = 0.6 - data_points[:,1] + y_offset
    #     plt.plot(data_points[:,0], data_points[:,1], color='b', linewidth = 1)
    # plt.axis('equal')
    plt.show()

    msg_params = [[-0.3,-0.4, -0.3,-0.39,-0.29,-0.39,-0.29,-0.38]]
    for param in transformed_parameters:
        flat_list = [item for sublist in param for item in sublist]
        msg_params.append(flat_list)

    counter = 0
    n = len(msg_params)
    msg_params[-1][0] += 0.03
    msg_params[-1][2] += 0.02
    msg_params[-1][4] += 0.02
    msg_params[-1][6] += 0.02
    msgparam = [[0.09,-0.8,0.10,-0.81,0.11,-0.81,0.12,-0.8],msg_params[-2], [0.27, -0.5, 0.29 -0.53, 0.28,-0.56, 0.27, -0.59], msg_params[-1]]
    n = len(msgparam)
    while not rospy.is_shutdown() and counter < n:
        msg = Float64MultiArray()
        # from (0.3, 0) to (0.6, -0.2) in global frame
        msg.data = msgparams[counter]
        stroke_publisher.publish(msg)
        counter += 1
        rospy.loginfo("publish stroke parameters: {}".format(msg.data))
        print('\n')
        rate.sleep()
    rospy.spin()