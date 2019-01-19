//
// Created by root on 2017/09/12.
//

#ifndef LINKEDLIST_LINK_H
#define LINKEDLIST_LINK_H


#include "Node.h"

class Link {
private:
     Node* head;
public:
    Link();
    Link(Node *head1);
    void insert(int x);
    void print();

};




#endif //LINKEDLIST_LINK_H
