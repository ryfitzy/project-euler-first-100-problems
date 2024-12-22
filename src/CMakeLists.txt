cmake_minimum_required(VERSION 3.10)
project(ProjectEuler)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp)

add_library(Problem1 src/problems/Problem1.cpp)
target_link_libraries(main Problem1)