// Created by root on 2017/09/02.


#ifndef STACKSQUEUES_LINKEDQUEUE_H
#define STACKSQUEUES_LINKEDQUEUE_H
#include <string>
#include "ClinkedList.h"

using namespace std;

typedef string Elem;
class LinkedQueue {

private:
    int n;
    ClinkedList C;
public:
    LinkedQueue();
    int size() const;
    bool empty() const;
    const Elem& front(); // Throw exception if empty
    void enqueue(const Elem&e); // Throw exception if empty
    void dequeue();

};


#endif //STACKSQUEUES_LINKEDQUEUE_H
