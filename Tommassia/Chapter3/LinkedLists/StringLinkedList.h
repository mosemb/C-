//
// Created by root on 2017/08/23.
//

#ifndef LINKEDLISTS_STRINGLINKEDLIST_H
#define LINKEDLISTS_STRINGLINKEDLIST_H

#include "StringNode.h"

class StringLinkedList {
private:
    StringNode *head;

public:
    ~StringLinkedList();
    StringLinkedList();
    bool isEmpty () const;
    const string & getfront() const;
    void addFront(const string &e);
    void removeFront();





};


#endif //LINKEDLISTS_STRINGLINKEDLIST_H
