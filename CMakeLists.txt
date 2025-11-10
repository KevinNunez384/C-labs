cmake_minimum_required(VERSION 2.8.9)

project(Lab6_Inheritance)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Lab6
    main.cpp
    Employee.cpp
    SalariedEmployee.cpp
    HourlyEmployee.cpp
    CommissionEmployee.cpp
)
