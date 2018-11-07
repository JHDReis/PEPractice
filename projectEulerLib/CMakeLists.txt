cmake_minimum_required(VERSION 3.12)
project(projectEulerLib)

set(CMAKE_CXX_STANDARD 17)

INCLUDE_DIRECTORIES(include src)

add_library(projectEulerLib SHARED src/info.cpp include/Part1.h)