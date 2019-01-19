//
// Created by root on 2017/09/12.
//

#include <cstdio>
#include "Link.h"

Link::Link() {

}

Link::Link(Node *head1) :head(head1) {

}

void Link::insert(int x) {
    Node *temp = new Node();
    temp->data =x; // insert a node;
    temp->next = head;
    head = temp;
}

void Link::print() {
    Node *temp = head;
    printf("List is : ");
    while(temp !=NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("/n");

}



