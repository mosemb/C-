//
// Created by root on 2017/09/05.
//

#ifndef CHAPTER6_ARRAYVECTOR_H
#define CHAPTER6_ARRAYVECTOR_H

typedef int Elem;
class ArrayVector {
private:
    int capacity; // capacity of Array
    int n;  // Number of element in an array
    Elem *A; // Designated fixed capacity
public:
    ArrayVector();
    int size() const;
    bool empty() const;
    Elem &operator[](int i);
    Elem &at(int i); // insert element , throw exception if element not there
    void erase(int i);
    void insert(int i, const Elem&e);
    void reserve(int N); // Reserved no of elements for the array.

};


#endif //CHAPTER6_ARRAYVECTOR_H
