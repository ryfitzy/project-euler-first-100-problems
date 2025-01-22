cmake_minimum_required(VERSION 3.5.0)
project(ProjectEuler VERSION 0.1.0 LANGUAGES C CXX)

include_directories(include)

file(GLOB SOURCES src/*.cc)

add_executable(ProjectEuler main.cc ${SOURCES})