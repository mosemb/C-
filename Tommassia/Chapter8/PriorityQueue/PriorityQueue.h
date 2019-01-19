//
// Created by root on 2017/09/19.
//

#ifndef PRIORITYQUEUE_PRIORITYQUEUE_H
#define PRIORITYQUEUE_PRIORITYQUEUE_H
#include <list>
using namespace std;

template <typename E, typename C>
class PriorityQueue {

private:
    C isLess;
    list<E> L; // storage of the list contents

public:
    int size() const;
    bool empty() const;
    void insert(const E&e);
    const E& min(); // Throw exception if empty
    void removeMin();


};




#endif //PRIORITYQUEUE_PRIORITYQUEUE_H
