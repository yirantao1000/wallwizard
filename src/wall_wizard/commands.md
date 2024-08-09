ssh -X hello-robot@172.26.185.83

# run first every time the robot is powered on.
stretch_robot_home.py

# stow the arm.
stretch_robot_stow.py

# teleoperate with keyboard
roslaunch stretch_core keyboard_teleop.launch

# start core functions such as state publisher
roslaunch stretch_core stretch_driver.launch

# start camera
roslaunch stretch_core d435i_high_resolution.launch

# start Aruco tag locator
roslaunch stretch_core stretch_aruco.launch

# rviz
rosrun rviz rviz -d /home/hello-robot/catkin_ws/src/stretch_tutorials/rviz/aruco_detector_example.rviz
