//
// Created by root on 2017/08/24.
//

#ifndef LINKEDLISTS_DOUBLENODE_H
#define LINKEDLISTS_DOUBLENODE_H
#include <string>
#include "DoubleLinkedList.h"

using namespace std;
typedef string Elem;

class DoubleNode {

public:


private:
    Elem elem;
    DoubleNode *next;
    DoubleNode *prev;
    friend class DoubleLinkedList;

};


#endif //LINKEDLISTS_DOUBLENODE_H
