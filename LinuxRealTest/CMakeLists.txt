cmake_minimum_required(VERSION 3.7)
project(LinuxRealTest)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp A.cpp A.h Animal.cpp Animal.h)
add_executable(LinuxRealTest ${SOURCE_FILES})