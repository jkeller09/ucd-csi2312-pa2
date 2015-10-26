cmake_minimum_required(VERSION 3.3)
project(Programming_assignment)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Cluster.cpp Cluster.h Point.cpp Point.h Cluster.cpp main.cpp)
add_executable(Programming_assignment ${SOURCE_FILES})