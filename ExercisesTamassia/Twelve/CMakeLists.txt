cmake_minimum_required(VERSION 3.7)
project(Twelve)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CreditCard.h CreditCard.cpp)
add_executable(Twelve ${SOURCE_FILES})