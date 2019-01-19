//
// Created by root on 2017/09/19.
//

#include "PriorityQueue.h"

template<typename E, typename C>
int PriorityQueue<E,C>::size() const {
    return L.size();
}

template<typename E, typename C>
bool PriorityQueue<E,C>::empty() const {
    return L.empty(); // L.size()==0 as well could have worked
}

template<typename E, typename C>
void PriorityQueue<E,C>::insert(const E &e) {
    typename list<E>::iterator p;
    p=L.begin();
    while(p!=L.end() && !isLess(e,*p)) ++p;
    L.insert(p,e);
}

template<typename E, typename C>
const E &PriorityQueue<E,C>::min() {
    return L.front();
}

template <typename E, typename C>
void PriorityQueue<E,C>::removeMin() {
    L.pop_front();
}








