//
// Created by root on 2017/08/23.
//

#include "StringLinkedList.h"



StringLinkedList::StringLinkedList() :head(NULL) {

}

StringLinkedList::~StringLinkedList() {
    while(!isEmpty()){
        removeFront();
    }
}

bool StringLinkedList::isEmpty() const {
    return head == NULL;
}

const string &StringLinkedList::getfront() const {


    return head->elem;
}

void StringLinkedList::addFront(const string &e) {
    StringNode * v = new StringNode;
    v->elem = e;
    v->next = head;
    head = v;


}

void StringLinkedList::removeFront() {
    StringNode * old = head;
    head = old->next;
    delete old;

}


