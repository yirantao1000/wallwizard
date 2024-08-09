1. First align: given longer time than in 'painting' mode to avoid sudden fast motion (may cause intense shakings and large friction)

2. In align, first withdraw pens and then finally move base. This is to avoid wrong drawings and arm collisions.

3. In main function: process data, plan and publish . In callbacks, just receive data. Callbacks block each other, but main() and any callback are in parallel. But the variables shared by them can be updated in real-time.

4. rospy.spin() blocks main() and calls the corrsponding callback when data arrives.

5. Divide Planner and Robot into two classes (two layers).

6. To avoid the noises of detected current poses caused by shaking AR tag locating, use sliding window to compute the average.

7. When using quaternion to transform coordinates, first translate quaternion to euler angles and only keep the rotation around z for coordinate-system transformation. If directly transforming coordinates with quaternion, the motion may be distributed to planes besides x-z plane, which are inexecutable.

8. When using quaternion to transform orientation to different coordinate systems, only compute the orientation difference between two x-axes and use it to rotate the robot.

9. Smoothie the base motion speed, but directly give the endpoint of horizon motion to base without giving intermediate waypoints. Divide the motion of manipulators into several motion with constant-velocity (1/ctrl_freq * distance).

10. Don't use wait_for_result() in manipulator motion function (wait for execution completion + duration ends), which will disturb controlling base.