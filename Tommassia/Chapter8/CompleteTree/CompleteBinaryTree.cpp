//
// Created by root on 2017/09/19.
//

#include "CompleteBinaryTree.h"
template <typename E>
CompleteBinaryTree<E>::CompleteBinaryTree() :V(1){

}

template <typename E>
int CompleteBinaryTree<E>::size() const {
    return CompleteBinaryTree::V.size()-1;
}


template <typename E>
Position CompleteBinaryTree<E>::left(const Position &p) {
    return pos(2*idx(p));
}

template <typename E>
Position CompleteBinaryTree<E>::right(const Position &p) {
    return pos(2*idx(p)+1);
}

template <typename E>
Position CompleteBinaryTree<E>::parent(const Position &p) {
    return pos(idx(p)/2);
}

template<typename E >
bool CompleteBinaryTree<E>::hasLeft(const Position &p) const {
    return 2*idx(p) <=size();
}

template<typename E>
bool CompleteBinaryTree<E>::hasRight(const Position &p) const {
    return 2*idx(p)+1 <=size();
}

template <typename E>
bool CompleteBinaryTree<E>::isRoot(const Position &p) const {
    return idx(p)==1;
}

template<typename E>
Position CompleteBinaryTree<E>::root() {
    return pos(1);
}

template<typename E>
Position CompleteBinaryTree<E>::last() {
    return pos(size());
}

template <typename E>
void CompleteBinaryTree<E>::addLast(const E &e) {
    V.push_back(e);
}

template <typename E>
void CompleteBinaryTree<E>::removeLast() {
  V.pop_back();
}

template <typename E>
void CompleteBinaryTree<E>::swap(const Position &p, const Position &q) {
E e =*p; *q=*p; *p=e;

}























