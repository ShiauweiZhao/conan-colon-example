cmake_minimum_required(VERSION 3.8)
project(hello_ros)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(hello REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(Taskflow REQUIRED)
add_executable(hello_ros src/hello_ros.cpp)
ament_target_dependencies(hello_ros rclcpp std_msgs hello Taskflow)
ament_package()
