//
// Created by root on 2017/09/06.
//

#ifndef CHAPTER6_NODELIST_H
#define CHAPTER6_NODELIST_H
#include <vector>
#include <algorithm>


using namespace std;

typedef int Elem;
class NodeList {
private:
    struct Node {
        Elem elem;
        Node * prev; // Previous element in list
        Node * next; // Next element in list
    };

    int n; // number of elements
    Node * header;
    Node * trailer;

public:
    class Iterator{
    private:
        Node *v;  // Pointer to the node
        Iterator(Node *u);  // Create from Node

    public:
        Elem& operator*(); // Pointer to the element
        bool operator==(const Iterator&p) const; // Compare positions
        bool operator!=(const Iterator&p)const;
        Iterator&operator ++(); // move to next position
        Iterator&operator --(); // move to the previous position
        friend class NodeList;
    };

public:
    NodeList();
    ~NodeList();
    int size() const; // List size
    bool empty() const; // check whether the list is empty
    Iterator begin() const; // Iterator beging function
    Iterator end() const; // Last element of List
    void insertFront(const Elem &e);
    void insertBack(const Elem & e);
    void insert(const Iterator&p, const Elem &e); // Insert e before p
    void eraseFront();
    void eraseBack();
    void erase(const Iterator&p); // Remove element p
    int vectorSum(vector<int>V);

};




#endif //CHAPTER6_NODELIST_H
