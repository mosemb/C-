//
// Created by root on 2017/08/24.
//

#include "DoubleLinkedList.h"

DoubleLinkedList::~DoubleLinkedList() {
    while(!isEmpty()){
        removefront();
    }
    delete header;
    delete trailer;
}

DoubleLinkedList::DoubleLinkedList() {
    header = new DoubleNode;
    trailer = new DoubleNode;
    header->next = trailer;
    trailer->prev = header;
}

bool DoubleLinkedList::isEmpty() const {
    return (header->next = trailer);
}

const Elem &DoubleLinkedList::front() const {
    return header->next->elem;
}

const Elem &DoubleLinkedList::back() const {
    return trailer->prev->elem;
}

void DoubleLinkedList::add(DoubleNode *v, const Elem &e) {
    DoubleNode *u = new DoubleNode;
    u->elem=e;
    u->next = v;
    u->prev = v->prev;


}

void DoubleLinkedList::addback(const Elem &e) {
    add(trailer, e);

}

void DoubleLinkedList::addfront(const Elem &e) {
    add(header->next, e);
}

void DoubleLinkedList::remove(DoubleNode *v) { // Remove a link
    DoubleNode *u = v->prev;
    DoubleNode *w = v->next;
    u->next = w;
    w->prev = u;
}

void DoubleLinkedList::removefront() {
    remove(header->next);
}

void DoubleLinkedList::removeback() {
    remove(trailer->prev);

}













