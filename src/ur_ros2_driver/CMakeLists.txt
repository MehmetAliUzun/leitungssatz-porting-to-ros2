cmake_minimum_required(VERSION 3.8)
project(ur_ros2_driver)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/GripperInfo.msg"
  "msg/DashboardInfo.msg"
  "msg/JogControl.msg"
  "msg/PathEntry.msg"
  "srv/SetGripper.srv"
  "srv/SetCartTarget.srv"
  "srv/SetJointTarget.srv"
  "srv/SetTrajectory.srv"
  "srv/SetSpeedSlider.srv"
  "srv/SetClipGun.srv"
  "srv/SetRelCartTarget.srv"
  "srv/StopMotion.srv"
  "srv/StartJog.srv"
  "srv/GetGripperCalib.srv"
  "srv/GetTimeStamp.srv"
  "srv/Log.srv"
  "srv/Power.srv"
  "srv/SetPayload.srv"
  "srv/SetContactTarget.srv"
  "srv/SetForceTarget.srv"
  "srv/SetFreedrive.srv"
  # "srv/TestTime.srv"

  DEPENDENCIES builtin_interfaces

)

ament_export_dependencies(rosidl_default_runtime)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
