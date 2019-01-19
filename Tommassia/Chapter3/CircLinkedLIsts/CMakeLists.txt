cmake_minimum_required(VERSION 3.7)
project(CircLinkedLIsts)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CNode.cpp CNode.h ClinkedList.cpp ClinkedList.h)
add_executable(CircLinkedLIsts ${SOURCE_FILES})