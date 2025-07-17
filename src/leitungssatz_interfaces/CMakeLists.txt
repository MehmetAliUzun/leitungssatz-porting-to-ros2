cmake_minimum_required(VERSION 3.8)
project(leitungssatz_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)

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
  

  DEPENDENCIES builtin_interfaces geometry_msgs sensor_msgs std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
