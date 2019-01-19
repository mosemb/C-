// Created by root on 2017/09/02.
#include <iostream>
#include "LinkedQueue.h"

LinkedQueue::LinkedQueue() :C(), n(0) {
}

int LinkedQueue::size() const {
    return n;
}
bool LinkedQueue::empty() const {
    return n==0;
}

const Elem &LinkedQueue::front() {
   try{
       if (empty()) {
           throw 99;
       }
       else {
           return C.front();
       }
   }catch (int x ){
       cout << "The list is empty ";
   }
}

void LinkedQueue::enqueue(const Elem &e) {
    C.add(e);
    C.advance();
    n++;

}

void LinkedQueue::dequeue() {
    try{
        if(empty()){
            throw 99;

        }else{
            C.remove();
            n--;
        }
    }catch(int x){

        cout << "Que is empty";

    }

}







