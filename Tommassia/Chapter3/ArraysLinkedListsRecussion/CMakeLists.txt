cmake_minimum_required(VERSION 3.7)
project(ArraysLinkedListsRecussion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp GameEntry.h GameEntry.cpp Scores.h Scores.cpp InsertionSort.cpp InsertionSort.h)
add_executable(ArraysLinkedListsRecussion ${SOURCE_FILES})