cmake_minimum_required(VERSION 3.13)
project(task_scheduling_framework)

set(CMAKE_CXX_STANDARD 14)
set(CMKAE_VERBOSE_MAKEFILE)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_library(taskSchedulingFramework STATIC implementation/src/main.cpp)

include_directories("interface")

