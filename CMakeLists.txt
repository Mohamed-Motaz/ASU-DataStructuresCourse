cmake_minimum_required(VERSION 3.15)
project(DataStructures)

set(CMAKE_CXX_STANDARD 20)

add_executable(DataStructures main.cpp)
add_executable(pointers Pointers/pointers.cpp)
add_executable(classes Classes/classes.cpp Classes/rectangle.cpp Classes/rectangle.h)

