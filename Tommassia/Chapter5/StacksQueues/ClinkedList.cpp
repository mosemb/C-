//
// Created by root on 2017/08/25.
//

#include <iostream>
#include "ClinkedList.h"

ClinkedList::ClinkedList() :cursor(NULL) {  // constructor

}

ClinkedList::~ClinkedList() {   // destructor
    while(!isEmpty()){
        remove();
    }
}

bool ClinkedList::isEmpty() const {
    return cursor==NULL;
}

const Elem & ClinkedList::front() const {
    return cursor->next->elem;
}

const Elem &ClinkedList::back() const {  // elem at
    return cursor->elem;
}

void ClinkedList::advance() {
    cursor = cursor->next;

}

void ClinkedList::add(const Elem &e) {

    CNode *v = new CNode;
    v->elem=e;
    if (cursor==NULL){
        v->next = v;
        cursor = v;
    } else{
        v->next = cursor->next;
        cursor->next = v;
    }



}



void ClinkedList::remove() {
    CNode *old = cursor->next;
    if(old==cursor){
        cursor=NULL;
    } else{
        cursor->next = old->next;
    }

}

void ClinkedList::printresults(ClinkedList&T) {
    CNode *Temp;
    cout << "in print";
    while(!T.isEmpty()){
        cout << Temp->elem ;
        //temp = temp->next;
        cout << "in printer ";
    }
    cout << endl;
}










