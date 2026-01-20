cmake_minimum_required(VERSION 3.12)
project(ProjectEuler)

set(CMAKE_CXX_STANDARD 26)

INCLUDE_DIRECTORIES(projectEulerLib/include)


add_subdirectory(projectEulerLib)
add_subdirectory(tests)

add_executable(ProjectEuler main.cpp)

target_link_libraries(ProjectEuler projectEulerLib)