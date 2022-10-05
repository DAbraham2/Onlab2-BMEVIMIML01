cmake_minimum_required(VERSION 3.22)
project(drone)

set(CMAKE_CXX_STANDARD 17)

add_executable(drone main.cpp sys_status.cpp  specs.cpp  maneuvers.cpp)

add_executable(specs-slice specs-slice.cpp specs.cpp)
