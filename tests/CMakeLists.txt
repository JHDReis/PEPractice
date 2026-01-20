cmake_minimum_required(VERSION 3.12)
project(tests)

set(CMAKE_CXX_STANDARD 26)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.8.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

link_libraries(projectEulerLib)

add_executable(${PROJECT_NAME} simple_test.cpp Part1_Tests.cpp)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain projectEulerLib)