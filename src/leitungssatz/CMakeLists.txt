cmake_minimum_required(VERSION 3.8)
project(leitungssatz)

# if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
#   add_compile_options(-Wall -Wextra -Wpedantic)
# endif()
set(CMAKE_CXX_STANDARD 17)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)
# find_package(ur_ros_driver REQUIRED)

find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)



find_package(moveit_ros_planning_interface REQUIRED)


# And other libraries (commented for now)
# find_package(OpenCV REQUIRED)
# find_package(Eigen3 REQUIRED)
# find_package(nlohmann_json REQUIRED)
# find_package(Spinnaker REQUIRED)


# Message files
set(msg_files
  "msg/Resolution.msg"
  "msg/VectorResolution.msg"
)

# Service files
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

include_directories(include)


add_executable(test_node src/test_node.cpp) # Example executable for testing purposes
target_include_directories(test_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(test_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

# Following lines are commented out for now, will uncomment when the related source files are ready

# # === Executable: point_recording ===
# add_executable(point_recording src/point_recording.cpp)
# ament_target_dependencies(point_recording rclcpp std_msgs tf2)
# rosidl_target_interfaces(point_recording
#   ${PROJECT_NAME} "rosidl_typesupport_cpp")

# # === Executable: tf2_publisher ===
# add_executable(tf2_publisher src/tf2_publisher.cpp)
# ament_target_dependencies(tf2_publisher rclcpp std_msgs tf2)
# rosidl_target_interfaces(tf2_publisher
#   ${PROJECT_NAME} "rosidl_typesupport_cpp")

# # === Executable: main_node ===
# add_executable(main_node
#   src/Programms/Main.cpp
#   src/Gripper.cpp
#   src/Robot.cpp
#   src/Task.cpp
#   src/TaskScheduler.cpp
#   src/Tasks/InterTask.cpp
#   src/Tasks/MoveTask.cpp
#   src/Tasks/GripperTask.cpp
#   src/Tasks/ForceTask.cpp
#   src/Tasks/SpiralTask.cpp
#   src/Tasks/GrabBuchseTask.cpp
#   src/Tasks/SetCableOrientationTask.cpp
#   src/Tasks/WirePushTask.cpp
#   src/Tasks/CableCheckTask.cpp
#   src/Wrench.cpp
#   src/Tasks/ToolChangeTask.cpp
# )
# ament_target_dependencies(main_node rclcpp std_msgs tf2)
# rosidl_target_interfaces(main_node
#   ${PROJECT_NAME} "rosidl_typesupport_cpp")

#   # Other executables will be added similarly



ament_target_dependencies(
  test_node
  "rclcpp"
  "rclpy"
  "std_msgs"
  "tf2"
  # "ur_ros_driver"
)


install(TARGETS 
  test_node # Uncomment the following lines when the executables are ready
  # point_recording
  # tf2_publisher
  # main_node # Add other executables here later
  DESTINATION lib/${PROJECT_NAME})

# if(BUILD_TESTING)
#   find_package(ament_lint_auto REQUIRED)
#   # the following line skips the linter which checks for copyrights
#   # comment the line when a copyright and license is added to all source files
#   set(ament_cmake_copyright_FOUND TRUE)
#   # the following line skips cpplint (only works in a git repo)
#   # comment the line when this package is in a git repo and when
#   # a copyright and license is added to all source files
#   set(ament_cmake_cpplint_FOUND TRUE)
#   ament_lint_auto_find_test_dependencies()
# endif()

ament_package()
