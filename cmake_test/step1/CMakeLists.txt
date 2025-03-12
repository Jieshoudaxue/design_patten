cmake_minimum_required(VERSION 3.10)

project(tutorial VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

configure_file(version.h.in version.h)

add_executable(tutorial main.cpp)

target_include_directories(tutorial PUBLIC ${PROJECT_BINARY_DIR})