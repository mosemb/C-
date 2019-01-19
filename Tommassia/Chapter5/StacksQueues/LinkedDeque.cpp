// Created by root on 2017/09/03.


#include <iostream>
#include "LinkedDeque.h"

LinkedDeque::LinkedDeque() {

}

int LinkedDeque::size() const {
    return n;
}

bool LinkedDeque::empty() const {

    return n==0;
}

const Elem &LinkedDeque::front() {

    try{
        if (empty()){
            throw 99;
        } else{
            return D.front();
        }
    }catch(int x){
        cout << "The queue is empty";
    }

}

const Elem &LinkedDeque::back() {
    try{
        if(empty()){
            throw 99;
        } else{
            D.back();
        }
    }catch(int x){
        cout << "Queue is empty";
    }
}

void LinkedDeque::insertfront(const Elem &e) {
    D.addfront(e);
    n++;
}

void LinkedDeque::insertback(const Elem &e) {
    D.addback(e);
    n++;
}

void LinkedDeque::removefront() {
    try {
        if(empty()){
            throw 99;
        }else{
            D.removefront();
            n--;
        }
    }catch(int x){
        cout << "Queue is empty ";
    }
}

void LinkedDeque::removeback() {
    try{
        if(empty()){
           throw 99;
        } else{
            D.removeback();
            n--;
        }
    }catch(int x){
        cout << "The queue is empty";
    }
}








