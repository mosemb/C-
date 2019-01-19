//
// Created by root on 2017/08/24.
//

#ifndef LINKEDLISTS_DOUBLELINKEDLIST_H
#define LINKEDLISTS_DOUBLELINKEDLIST_H


#include "DoubleNode.h"

class DoubleLinkedList {

public:
    ~DoubleLinkedList();
    DoubleLinkedList();
    bool isEmpty() const;
    const Elem& front() const;
    const Elem& back() const;
    void addback(const Elem&e);
    void addfront(const Elem&e);
    void removefront();
    void removeback();



private:
    DoubleNode *header;
    DoubleNode *trailer;


protected:
    void add(DoubleNode* v, const Elem &e);
    void remove(DoubleNode* v);


};




#endif //LINKEDLISTS_DOUBLELINKEDLIST_H
