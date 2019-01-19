cmake_minimum_required(VERSION 3.7)
project(LinkedList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Node.cpp Node.h Link.cpp Link.h)
add_executable(LinkedList ${SOURCE_FILES})