//
// Created by root on 2017/09/04.
//

#ifndef STACKSQUEUES_DEQUESTACK_H
#define STACKSQUEUES_DEQUESTACK_H

#include <string>
#include "LinkedDeque.h"

using namespace std;


typedef string Elem;
class DequeStack {
private:
   // LinkedDeque D;
    LinkedDeque D;
public:
    DequeStack();
    int size()const;
    bool empty() const;
    const Elem&top();// Throw excetption if empty
    void push(Elem &e); // Put element on stack
    void pop();// Put off element from stack throw exception if empty


};


#endif //STACKSQUEUES_DEQUESTACK_H
