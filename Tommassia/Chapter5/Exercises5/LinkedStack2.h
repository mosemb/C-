//
// Created by root on 2017/09/04.
//

#ifndef EXERCISES5_LINKEDSTACK2_H
#define EXERCISES5_LINKEDSTACK2_H

#include "SlinkedList.h"

template <typename Ea>
class LinkedStack2 {
private:
    SlinkedList <Ea> S; // The elements
    int n; // returns the number of elements
public:
    LinkedStack2();
    int size()const;
    bool empty()const;
    const Ea&top(); // Throw exception if nothing is on top
    void push(const Ea& e); // Push element on stack
    void pop(); // Throw exception if empty
};



#endif //EXERCISES5_LINKEDSTACK2_H
