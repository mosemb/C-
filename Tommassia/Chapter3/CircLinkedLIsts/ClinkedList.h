//
// Created by root on 2017/08/25.
//

#ifndef CIRCLINKEDLISTS_CLINKEDLIST_H
#define CIRCLINKEDLISTS_CLINKEDLIST_H


#include "CNode.h"

class ClinkedList {
private:
    CNode *cursor;
public:
    ~ClinkedList();
    ClinkedList();
    bool isEmpty() const;
    const Elem& front()const;  // returns the cursor
    const Elem& back()const; // returns element at back of cursor
    void advance(); // advance cursor
    void add(const Elem&e); // add element after cursor
    void remove();  // remove node after cursor
    void printresults(ClinkedList &T);



};


#endif //CIRCLINKEDLISTS_CLINKEDLIST_H
