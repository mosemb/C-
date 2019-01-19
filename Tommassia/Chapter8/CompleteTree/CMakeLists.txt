cmake_minimum_required(VERSION 3.7)
project(CompleteTree)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CompleteBinaryTree.cpp CompleteBinaryTree.h)
add_executable(CompleteTree ${SOURCE_FILES})