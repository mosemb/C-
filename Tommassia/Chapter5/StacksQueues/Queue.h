//
// Created by root on 2017/09/02.
//

#ifndef STACKSQUEUES_QUEUE_H
#define STACKSQUEUES_QUEUE_H

template <typename  E>
class Queue {
public:
    bool empty() const;
    int size()const;
    const E& front(); // Throw exception
    void enqueue(const E& e);
    void dequeue(); // Throw exception if empty

};


#endif //STACKSQUEUES_QUEUE_H
