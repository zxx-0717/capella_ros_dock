cmake_minimum_required(VERSION 3.8)
project(capella_ros_dock)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(angles REQUIRED)
# find_package(control_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
# find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(Boost REQUIRED)
find_package(capella_ros_dock_msgs REQUIRED)
find_package(capella_ros_msg REQUIRED)
find_package(capella_ros_service_interfaces REQUIRED)
find_package(std_srvs REQUIRED)

set(dependencies
  angles
  geometry_msgs
  nav_msgs
  rclcpp
  rclcpp_action
  rclcpp_components
  tf2
  tf2_geometry_msgs
  tf2_ros
  Boost
  capella_ros_dock_msgs
  capella_ros_msg
  capella_ros_service_interfaces
  std_srvs
)

# Hazards vector publisher
add_library(hazard_publisher_lib  SHARED)
target_sources(hazard_publisher_lib PRIVATE src/hazards_vector_publisher)
target_include_directories(hazard_publisher_lib PUBLIC include)
ament_target_dependencies(hazard_publisher_lib ${dependencies})
rclcpp_components_register_node(hazard_publisher_lib
    PLUGIN "capella_ros_dock::HazardVectorPublisher"
    EXECUTABLE hazard_vector_publisher)

#Motion control node
add_library(motion_control_lib SHARED)
target_sources(
  motion_control_lib
  PRIVATE
  src/motion_control_node.cpp
  src/docking_behavior.cpp
  src/reflex_behavior.cpp
)
target_include_directories(motion_control_lib PUBLIC include)
ament_target_dependencies(motion_control_lib
  ${dependencies})
rclcpp_components_register_node(motion_control_lib
  PLUGIN "capella_ros_dock::MotionControlNode"
  EXECUTABLE motion_control)



ament_package()