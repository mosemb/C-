//
// Created by root on 2017/09/04.
//

#include <iostream>
#include "DequeStack.h"

DequeStack::DequeStack() :D(){

}

int DequeStack::size() const {
    return D.size();
}

bool DequeStack::empty() const {
    return D.empty();
}

const Elem &DequeStack::top() {
    try{ if(empty()){
            throw 99;
        } else{
            return D.front();
        }
    }catch (int x ){
        cout << "Queue is empty";
    }
}

void DequeStack::push(Elem &e) {
    D.insertfront(e);
}

void DequeStack::pop() {
    try{
        if(empty()){
            throw 99;
        } else{
            D.removefront();
        }

    }catch(int x ){
        cout << "The stack is empty";
    }
}










