//
// Created by root on 2017/09/03.
//

#ifndef STACKSQUEUES_LINKEDDEQUE_H
#define STACKSQUEUES_LINKEDDEQUE_H
#include <string>
#include "DoubleLinkedList.h"

using namespace std;

typedef string Elem;
class LinkedDeque {
private:
    DoubleLinkedList D;
    int n ;

public:
    LinkedDeque();
    int size() const;
    bool empty() const;
    const Elem& front(); // Throw exception if not
    const Elem & back(); // Throw exception if not
    void insertfront(const Elem&e);
    void insertback(const Elem&e);
    void  removefront();
    void removeback();

};


#endif //STACKSQUEUES_LINKEDDEQUE_H
