#!/bin/sh
conan install ros2 --output-folder=build --build=missing
colcon build --base-paths ros2 --cmake-args -DCMAKE_TOOLCHAIN_FILE=$PWD/build/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release