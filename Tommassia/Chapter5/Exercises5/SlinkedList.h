//
// Created by root on 2017/08/24.
//

#ifndef LINKEDLISTS_SLINKEDLIST_H
#define LINKEDLISTS_SLINKEDLIST_H

//#include "Snode.h"
#include "../../Chapter3/LinkedLists/Snode.h"

template <typename E>
class SlinkedList {
private:
    Snode<E>*head;
public:
    ~SlinkedList();
    SlinkedList();
    bool isEmpty() const;
    const E& front() const;
    void addFront(const E& e);
    void removeFront();

};


#endif //LINKEDLISTS_SLINKEDLIST_H
