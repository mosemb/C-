//
// Created by root on 2017/09/01.
//

#ifndef STACKSQUEUES_ARRAYSTACK_H
#define STACKSQUEUES_ARRAYSTACK_H

//#include "StackEmpty.h"
//using namespace std;

template <typename E>
class ArrayStack {
private:
    E* S;
    int capacity;
    int top;
    enum{ DEF_CAPACITY = 100};

public:
   // ~ArrayStack();
    ArrayStack(int cap = DEF_CAPACITY);
    bool empty() const;
    const E& tops() const; // throw exception
    int size() const;
    void push( const E& e); // Throw exception
    void pop() ; // throw exception

};


#endif //STACKSQUEUES_ARRAYSTACK_H
