cmake_minimum_required(VERSION 3.7)
project(StacksQueues)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ArrayStack.cpp ArrayStack.h Queue.cpp Queue.h ClinkedList.h ClinkedList.cpp LinkedQueue.cpp
        LinkedQueue.h LinkedDeque.cpp LinkedDeque.h DoubleLinkedList.h DoubleLinkedList.cpp DoubleNode.h DoubleNode.cpp
        DequeStack.cpp DequeStack.h CNode.h CNode.cpp)

add_executable(StacksQueues ${SOURCE_FILES})