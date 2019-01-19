//
// Created by root on 2017/09/20.
//

#ifndef HEAPPRIORITYQUEUE_HEAPPRIORITYQUEUE_H
#define HEAPPRIORITYQUEUE_HEAPPRIORITYQUEUE_H

template <typename E, typename C>
class HeapPriorityQueue {
private:


public:
    int size() const;
    bool empty() const;
    void insert(const E&e);
    const E&  min(); // Return the minimum element
    void removemin();
};


#endif //HEAPPRIORITYQUEUE_HEAPPRIORITYQUEUE_H
