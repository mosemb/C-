//
// Created by root on 2017/09/01.


#include "ArrayStack.h"
#include <iostream>
using namespace std;

template <typename E>
ArrayStack<E>::ArrayStack(int cap):S(new E[cap]), capacity(cap), top(-1) {

}
template <typename E>
int ArrayStack<E>::size() const {
    return (top+1);
}

template<typename E>
bool ArrayStack<E>::empty() const {
    return top<0;
}

template <typename E>
const  E &ArrayStack <E>::tops() const {
    try{
        if(empty()){
            throw 99;
        } else{
            return S[top];
        }
    }catch (int x){
        cout << "Stack is empty" ;
    }
}

template <typename E>
void ArrayStack<E>::push(const E &e) {
    try{
        if(size()==capacity){
            throw 99;
        } else{
            S[++top] =e;
        }
    }catch(int x){
        cout << "Stack is full";
        cout << endl;
    }
}

template <typename E>
void ArrayStack<E>::pop() {
    try{
        if(empty()){
            throw 99;
        } else{}
        --top;
    } catch(int x){
        cout << "Stack is empty ";
    }
}












