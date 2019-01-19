cmake_minimum_required(VERSION 3.7)
project(Exercises5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LinkedStack2.cpp LinkedStack2.h SlinkedList.h SlinkedList.cpp)
add_executable(Exercises5 ${SOURCE_FILES})