cmake_minimum_required(VERSION 3.7)
project(Chapter6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ArrayVector.cpp ArrayVector.h NodeList.cpp NodeList.h)
add_executable(Chapter6 ${SOURCE_FILES})