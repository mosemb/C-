//
// Created by root on 2017/09/15.
//

#ifndef CHAPTER7_LINKEDBINARYTREE_H
#define CHAPTER7_LINKEDBINARYTREE_H
#include <list>
typedef int Elem;
class LinkedBinaryTree {
private:
    Node* _root;  // Pointer to root
    int n ;

protected:
    struct Node{
        Elem  elt; // The element in question
        Node *right ; // Right child
        Node * left ; // Left child
        Node *parent ; // Parent for the child
        Node();
    };

public:
    class Position {
    private:
        Node *v; // Pointer to the element
    public:
        Position(Node* _v =NULL);
        Elem &operator*();
        Position tleft()const;
        Position tright()const;
        Position tparent()const;
        bool isRoot() const;
        bool isExternal()const;
        friend class LinkedBinaryTree;

    };
    typedef std::list<Position> PositionList; // List of positions
public:
    LinkedBinaryTree();
    int size() const;
    bool empty() const;
    Position root() const; // Empty
    PositionList positions() const;
    void addRoot(); // Add root to empty tree
    void expandExternal(Position &p)const ;
    Position removeAboveExternal(const Position &p);

protected:
    void preorder(Node *v, PositionList& pl) const;


};


#endif //CHAPTER7_LINKEDBINARYTREE_H
