cmake_minimum_required(VERSION 3.7)
project(TicTacTo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TicTacToe.cpp TicTacToe.h)
add_executable(TicTacTo ${SOURCE_FILES})