//
// Created by root on 2017/09/06.
//

#include "NodeList.h"

NodeList::Iterator::Iterator(NodeList::Node *u) {
    v=u;
}

Elem &NodeList::Iterator::operator*() {
    return v->elem;
}

bool NodeList::Iterator::operator==(const NodeList::Iterator &p) const {
    return v==p.v;
}

bool NodeList::Iterator::operator!=(const NodeList::Iterator &p) const {
    return v!=p.v;
}

NodeList::Iterator &NodeList::Iterator::operator++() {   // Move to next position
   v=v->next; return *this;
}

NodeList::Iterator &NodeList::Iterator::operator--() {  // Move to previous position
    v=v->prev;  return *this;
}


NodeList::NodeList() {
    n=0;
    header = new Node;
    trailer = new Node;
    header->next =trailer;
    trailer->prev = header;

}

NodeList::~NodeList() {

}

int NodeList::size() const {
    return n;
}

bool NodeList::empty() const {
    return n==0;
}

NodeList::Iterator NodeList::begin() const {
    return NodeList::Iterator(header->next);
}

NodeList::Iterator NodeList::end() const {
    return NodeList::Iterator(trailer);
}

void NodeList::insertFront(const Elem &e) {
    insert(begin(),e);
}

void NodeList::insert(const NodeList::Iterator &p, const Elem &e) {
    Node *w = p.v;
    Node *u = w->prev;
    Node *v = new Node;
    v->elem = e;
    v->next = w;
    w->prev = v;
    v->prev =w;
    u->next = v;
    n++;
}

void NodeList::insertBack(const Elem &e) {
    insert(end(),e);

}

void NodeList::erase(const NodeList::Iterator &p) {
    Node * v= p.v;
    Node * w= v->next;
    Node * u = v->prev;
    u->next = w;
    w->prev = u;
    delete  v;
    n--;
}

void NodeList::eraseFront() {
    erase(begin());
}

void NodeList::eraseBack() {
    erase(--end());

}

int NodeList::vectorSum(vector<int> V) {
    typedef vector<int > ::iterator Iterator;
    int sum = 0;
    for(Iterator p = V.begin(); p !=V.end(); ++p ){
        sum += *p;
    }
    return sum;
}












