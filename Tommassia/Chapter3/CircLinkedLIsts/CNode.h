//
// Created by root on 2017/08/25.
//

#ifndef CIRCLINKEDLISTS_CNODE_H
#define CIRCLINKEDLISTS_CNODE_H
#include <string>
using namespace std;

typedef string Elem;
class CNode {
private:
    Elem elem;   // Element in the list
    CNode *next;  // Next element in the list.
    friend class ClinkedList;  // provides access to all elements of CNode to ClinkedList
};


#endif //CIRCLINKEDLISTS_CNODE_H
