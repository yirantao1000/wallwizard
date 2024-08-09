For midterm (current thought):
1. Track 1: Paint something preplanned on the big canvas (whiteboard).
2. Track 2: Integrate Frida to Stretch robot to paint something on a small wall canvas.

# Impelement the motion loop
- Input: Desired base / end effector pose
- Input: Aruco marker img
- Output movement command
> Aruco img --> compute relative pose (package) --> generate control. refer to code
https://github.com/hello-robot/stretch_ros2/blob/galactic/stretch_core/stretch_core/align_to_aruco.py#L44
1. Try out the align_to_aruco code with our own tags
2. Implement our own motion control code for moving parallel to a wall. (This can serve as the executor for our planned strokes in future.)
	- How to Set tags?
	- How to control the camera motion to ensure robust localization?
	- How to do motion control?
	- ...

## Customize AruCo Tag
### Generate and configure a tag
1. Generate a marker image with OpenCV package or [https://aruco-gen.netlify.app/](generator), customizing image size in pixel and ID (0-249). We can use 0~10, Haha.
2. Add it to the `stretch_marker_dict.yaml`. stretch_core/config/stretch_marker_dict.yaml

### Compute the pose of a tag
(It seems that) Stretch's package would compute the tf pose of the tag center with respective to camera frame. 

For our application, we might require several tags distributed on the wall (or floor) to provide real-time localization message. Therefore, we need to implement a customized ArucoTF node. And proper configuration should be test out.

## Implement our pipeline
Desired code structure (for now):
- A node to process the input AruCo tag pose, and output the (global) pose of baselink. This might require properly deal with information from different tags, depending on how `detect_aruco_markers.py` and `framelistener` work and what kind of message regarding AruCo is published. (line 657, `detect_aruco_markers.py`)
- A node to generate control commands. Based on the computed global position and input trajectory, control the motion of robot. This migh require control the motion of camera specifically to ensure localization.

**Code Sketch from GPT**
But we should refer to the implementation of `align_to_aruco.py`
``` Python
#!/usr/bin/env python

import rospy
from aruco_ros.msg import ArucoMarkerArray
from geometry_msgs.msg import PoseWithCovarianceStamped

class ArucoLocalization:
    def __init__(self):
        rospy.init_node('aruco_localization_node')
        self.pose_pub = rospy.Publisher('/robot_pose', PoseWithCovarianceStamped, queue_size=10)
        self.aruco_sub = rospy.Subscriber('/aruco_marker_publisher/markers', ArucoMarkerArray, self.aruco_callback)

    def aruco_callback(self, data):
        for marker in data.markers:
            if marker.id == 0:  # Example: target ID
                pose_msg = PoseWithCovarianceStamped()
                pose_msg.header.stamp = rospy.Time.now()
                pose_msg.header.frame_id = "world"
                # Conversion logic here
                self.pose_pub.publish(pose_msg)

if __name__ == '__main__':
    try:
        al = ArucoLocalization()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass

```

``` Python
#!/usr/bin/env python

import rospy
from geometry_msgs.msg import PoseWithCovarianceStamped, Twist

class RobotController:
    def __init__(self):
        rospy.init_node('robot_controller_node')
        self.cmd_vel_pub = rospy.Publisher('/cmd_vel', Twist, queue_size=10)
        self.pose_sub = rospy.Subscriber('/robot_pose', PoseWithCovarianceStamped, self.pose_callback)

    def pose_callback(self, data):
        # Implement movement logic based on current pose
        twist_msg = Twist()
        # Movement logic here
        self.cmd_vel_pub.publish(twist_msg)

if __name__ == '__main__':
    try:
        rc = RobotController()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass
```


