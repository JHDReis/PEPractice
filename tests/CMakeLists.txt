cmake_minimum_required(VERSION 3.12)
project(UnitTests)

set(CMAKE_CXX_STANDARD 17)

INCLUDE_DIRECTORIES(../projectEulerLib/include)

link_libraries(projectEulerLib)

ADD_EXECUTABLE(tests simple_test.cpp catch.hpp Part1_Tests.cpp)