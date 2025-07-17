cmake_minimum_required(VERSION 3.8)
project(leitungssatz)

set(CMAKE_CXX_STANDARD 17)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(leitungssatz_interfaces REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

find_package(image_transport REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)

# Uncomment and add more as needed
# find_package(OpenCV REQUIRED)
# find_package(Eigen3 REQUIRED)
# find_package(nlohmann_json REQUIRED)
# find_package(Spinnaker REQUIRED)

# Message and service files
set(msg_files
  "msg/Resolution.msg"
  "msg/VectorResolution.msg"
)

set(srv_files
  "srv/AddTf2.srv"
  "srv/CheckComponents.srv"
  "srv/GetBeep.srv"
  "srv/GetBoardLocation.srv"
  "srv/GetFinished.srv"
  "srv/GetRedBlock.srv"
  "srv/GetTriangles.srv"
  "srv/GrabBuchse.srv"
  "srv/SelectCam.srv"
  "srv/SetCableOrientation.srv"
  "srv/SetExposure.srv"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  DEPENDENCIES std_msgs builtin_interfaces geometry_msgs
)

# Include directories
include_directories(include)
include_directories(${EIGEN3_INCLUDE_DIRS})

# Main library
add_library(leitungssatz_lib SHARED
  src/TaskScheduler.cpp
  src/Gripper.cpp
  src/Task.cpp
  src/Wrench.cpp
  src/Robot.cpp
  
  src/Tasks/InterTask.cpp
  src/Tasks/CableCheckTask.cpp
  src/Tasks/ForceTask.cpp
  src/Tasks/GripperTask.cpp
  src/Tasks/MoveTask.cpp
  src/Tasks/SetCableOrientationTask.cpp
  src/Tasks/SpiralTask.cpp
  src/Tasks/ToolChangeTask.cpp
  src/Tasks/WirePushTask.cpp

)
ament_target_dependencies(leitungssatz_lib 
rclcpp
leitungssatz_interfaces
tf2_ros
tf2_geometry_msgs
image_transport
sensor_msgs
cv_bridge
OpenCV)
target_include_directories(leitungssatz_lib PUBLIC include)

# Library error patch
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(leitungssatz_lib "${cpp_typesupport_target}")
# Library error patch end

# Test nodes
add_executable(test_node src/TestNodes/test_node.cpp)
ament_target_dependencies(test_node rclcpp rclpy std_msgs tf2 leitungssatz_interfaces)
target_link_libraries(test_node leitungssatz_lib)

add_executable(test_gripper src/TestNodes/test_gripper.cpp)
ament_target_dependencies(test_gripper rclcpp leitungssatz_interfaces)
target_link_libraries(test_gripper leitungssatz_lib)

add_executable(test_wrench src/TestNodes/test_wrench.cpp)
ament_target_dependencies(test_wrench rclcpp leitungssatz_interfaces)
target_link_libraries(test_wrench leitungssatz_lib)

# Install targets
install(TARGETS
  test_node
  test_gripper
  test_wrench
  DESTINATION lib/${PROJECT_NAME}
)

# Install library to lib/ (no subdirectory)
install(TARGETS
  leitungssatz_lib
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
)

# Install headers
install(DIRECTORY include/
  DESTINATION include/
)

# Uncomment and add more executables as you implement them
# add_executable(point_recording src/point_recording.cpp)
# ament_target_dependencies(point_recording rclcpp std_msgs tf2)
# target_link_libraries(point_recording leitungssatz_lib)
# install(TARGETS point_recording DESTINATION lib/${PROJECT_NAME})

# add_executable(tf2_publisher src/tf2_publisher.cpp)
# ament_target_dependencies(tf2_publisher rclcpp std_msgs tf2)
# target_link_libraries(tf2_publisher leitungssatz_lib)
# install(TARGETS tf2_publisher DESTINATION lib/${PROJECT_NAME})

# add_executable(main_node src/Programms/Main.cpp)
# ament_target_dependencies(main_node rclcpp leitungssatz_interfaces)
# target_link_libraries(main_node leitungssatz_lib)
# install(TARGETS main_node DESTINATION lib/${PROJECT_NAME})

ament_package()