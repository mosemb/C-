cmake_minimum_required(VERSION 3.7)
project(Maps)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Entry.cpp Entry.h)
add_executable(Maps ${SOURCE_FILES})