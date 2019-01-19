//
// Created by root on 2017/08/23.
//


#ifndef LINKEDLISTS_STRINGNODE_H
#define LINKEDLISTS_STRINGNODE_H
#include <string>
#include "StringLinkedList.h"
using namespace std;

class StringNode {
    string elem;
    StringNode * next;

    friend class StringLinkedList;


/*public:
    StringNode();
    StringNode(string el, StringNode *elo);
    void setName(string elt);
    string getName();
    void setArray(StringNode *arr);
    */



};


#endif //LINKEDLISTS_STRINGNODE_H
