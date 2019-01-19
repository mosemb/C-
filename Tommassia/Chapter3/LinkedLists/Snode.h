//
// Created by root on 2017/08/24.
//

#ifndef LINKEDLISTS_SNODE_H
#define LINKEDLISTS_SNODE_H

template <typename E>
class Snode {
private:
    E elem;
    Snode <E> *next;
    friend class SlinkedList;



};


#endif //LINKEDLISTS_SNODE_H
