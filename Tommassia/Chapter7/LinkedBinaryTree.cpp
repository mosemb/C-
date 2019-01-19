//
// Created by root on 2017/09/15.
//

#include <cstdio>
#include "LinkedBinaryTree.h"

LinkedBinaryTree::Node::Node() :elt(), parent(NULL) , left(NULL), right(NULL){

}

LinkedBinaryTree::Position::Position(LinkedBinaryTree::Node *_v) :v(_v) {

}

Elem &LinkedBinaryTree::Position::operator*() {
    return v->elt;
}

LinkedBinaryTree::Position LinkedBinaryTree::Position::tleft() const {
    return LinkedBinaryTree::Position(v->left);
}

LinkedBinaryTree::Position LinkedBinaryTree::Position::tright() const {
    return LinkedBinaryTree::Position(v->right);
}

LinkedBinaryTree::Position LinkedBinaryTree::Position::tparent() const {
    return LinkedBinaryTree::Position(v->parent);
}

bool LinkedBinaryTree::Position::isRoot() const {
    return v->parent==NULL;
}

bool LinkedBinaryTree::Position::isExternal() const {
    return v->left==NULL && v->right==NULL;
}


LinkedBinaryTree::LinkedBinaryTree() :_root(NULL), n(NULL){
}

int LinkedBinaryTree::size() const {
    return n;
}

bool LinkedBinaryTree::empty() const {
    return size()==0;
}

LinkedBinaryTree::Position LinkedBinaryTree::root() const {
    return LinkedBinaryTree::Position(_root);
}

void LinkedBinaryTree::addRoot() {
    _root = new Node;
    n=1;

}

void LinkedBinaryTree::expandExternal(LinkedBinaryTree::Position &p) const {
    Node * v = p.v;
    v->left = new Node();
    v->left->parent = v;  // Adding the left node;
    v->right = new Node();
    v->right->parent = v;




}

LinkedBinaryTree::Position LinkedBinaryTree::removeAboveExternal(const LinkedBinaryTree::Position &p) {
    Node *w = p.v; // The node
    Node *v = w->parent; // The parent of node w
    Node *sib = (w==v->left?v->left:v->right);
    if(v==_root){
        _root = sib;
        sib->parent = NULL;
    }
    else {

        Node *gpar = v->parent;
        if (v == gpar->left) {
            gpar->left = sib;
        }else {
            gpar->right= sib;
            sib->parent = gpar;
        }
    }

    delete w; delete v;
    n -=2;
    return LinkedBinaryTree::Position(sib);
}

void LinkedBinaryTree::preorder(LinkedBinaryTree::Node *v, LinkedBinaryTree::PositionList &pl) const {
    pl.push_back(Position(v));
    if(v->left!=NULL){
        preorder(v->left,pl);
    }
    if(v->right!=NULL){
        preorder(v->right,pl);
    }
}

LinkedBinaryTree::PositionList LinkedBinaryTree::positions() const {
    PositionList pl;
    preorder(_root,pl);
    return LinkedBinaryTree::PositionList(pl);
}







