cmake_minimum_required(VERSION 2.8.9)

project(hello)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Lab4 week2.cpp Vehicle.cpp)
