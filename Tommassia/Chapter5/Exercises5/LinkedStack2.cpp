//
// Created by root on 2017/09/04.

#include "LinkedStack2.h"

#include <iostream>
using namespace std;

template <typename Ea>
LinkedStack2::LinkedStack2() {

}

template <typename Ea>
int LinkedStack2::size() const {
    return n;
}

template <typename Ea>
bool LinkedStack2::empty() const {
    return n==0;
}


template<typename Ea>
const Ea&LinkedStack2::top() {
    try{
        if(empty()){
            throw 99;
        } else {
            S.front();
        }
    }catch (int x ){
        cout << "Stack is full";
    }
    // return <#initializer#>;
}

template <typename Ea>
void LinkedStack2::push(const Ea &e) {
    ++n;
    S.addFront(e);

}

template <typename Ea>
void LinkedStack2::pop() {
    try{
        if(empty()){
            throw 99;
        } else{
            --n;
            S.removeFront();
        }

    }catch(int x ){
        cout << "List is empty";
    }

}




