cmake_minimum_required(VERSION 3.7)
project(Eleven)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Flower.h Flower.cpp)
add_executable(Eleven ${SOURCE_FILES})