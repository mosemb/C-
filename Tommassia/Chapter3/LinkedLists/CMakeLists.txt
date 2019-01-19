cmake_minimum_required(VERSION 3.7)
project(LinkedLists)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp StringLinkedList.cpp StringLinkedList.h StringNode.cpp
        StringNode.h Snode.cpp Snode.h  SlinkedList.cpp SlinkedList.h
        DoubleNode.cpp DoubleNode.h DoubleLinkedList.cpp DoubleLinkedList.h)
add_executable(LinkedLists ${SOURCE_FILES})