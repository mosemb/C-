//
// Created by root on 2017/08/22.
//

#include "InsertionSort.h"

InsertionSort::~InsertionSort() {}
InsertionSort::InsertionSort() {}

void InsertionSort::insertion(char *A, int n) {
    for(int i = 1 ; i<n ; i++){
        char cur = A[i]; // i runs the indicies , cur is the current first value , j runs the comparison
        int j = i-1;
        while(j>=0 && A[j]>cur){
            A[i+1] = A[i];
            j--;
        }
        A[i+1] = cur;
    }
}

void InsertionSort::insertion2(int*A, int v) {
    int value , index;
    for(int i = 1; i <v ; i++){
        value = A[i];
        index = i;
        while (index>0 && A[index-1] >value) {
            A[index - 1] = A[index];
            index--;
        }
        A[index] = value;
    }
}
