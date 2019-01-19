cmake_minimum_required(VERSION 3.7)
project(Chapter7)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LinkedBinaryTree.cpp LinkedBinaryTree.h Map.cpp Map.h)
add_executable(Chapter7 ${SOURCE_FILES})