//
// Created by root on 2017/08/24.
//

#include <cstdlib>
#include "SlinkedList.h"

template <typename E>
SlinkedList<E>::~SlinkedList() {
    while(!isEmpty){
        removeFront();
    }
}

template <typename E>
SlinkedList<E>::SlinkedList() :head(NULL) {
}

template <typename E>
bool SlinkedList<E>::isEmpty() const {
    return head ==NULL;
}

template <typename E>
const E &SlinkedList<E>::front() const {
    return head->elem;
}

template <typename E>
void SlinkedList<E>::addFront(const E &e) {
    Snode <E>*v = new Snode<E>;
    v->elem = e;
    v->next = head;
    head = v;
}

template <typename E>
void SlinkedList<E>::removeFront() {
    Snode<E>* old = head;
    head = old->next;
    delete old;
}



