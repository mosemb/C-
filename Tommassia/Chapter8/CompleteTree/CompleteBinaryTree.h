//
// Created by root on 2017/09/19.
//

#ifndef COMPLETETREE_COMPLETEBINARYTREE_H
#define COMPLETETREE_COMPLETEBINARYTREE_H
#include <vector>
using namespace std;

template <typename E>
class CompleteBinaryTree {


public:
    class Position{
    private:
        vector<E> V; // Vector to store the elements
    public:
        typedef typename vector <E>::iterator Position;

    protected:
        Position pos(int i){
            return V.begin()+1;
        }

        int idx(const Position&p) const{
            return p-V.begin();
        }

    };
    CompleteBinaryTree();
    int size() const;
    Position left(const Position&p);
    Position right(const Position&p);
    Position parent(const Position&p);
    bool hasLeft(const Position&p)const;
    bool hasRight(const Position&p) const;
    bool isRoot(const Position&p)const;
    Position root();
    Position last();
    void addLast(const E&e); // setter (add last node)
    void removeLast();       // setter ( Remove last node)
    void swap(const Position &p, const Position&q); //setter
};




#endif //COMPLETETREE_COMPLETEBINARYTREE_H
