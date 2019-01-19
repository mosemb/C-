//
// Created by root on 2017/09/05.
//

#include <cstdlib>
#include <iostream>
#include "ArrayVector.h"
using namespace std;

ArrayVector::ArrayVector() :n(0), capacity(0) , A(NULL){

}

int ArrayVector::size() const {
    return n;
}

bool ArrayVector::empty() const {
    return size()==0;
}

Elem &ArrayVector::operator[](int i) {

    return A[i];
}

Elem &ArrayVector::at(int i) {
    try{
        if (i<0||i>=n) {
            throw 99;
        } else{
            return A[i];
        }
    }catch(int x){
        cout << " Array out of Bounds";
    }
    //return A[i];
}

void ArrayVector::erase(int i) {
    for(int j = i+1; j<n; j++){
        A[j-1] = A[j];
        n--;
    }
}


void ArrayVector::reserve(int N) {
    if(capacity>=N){
        return;
    } else{
        Elem * B = new Elem[N]; // Create a bigger array
        for(int i =0; i<n; i++){
            B[i] = A[i];
        }
        if(A!=NULL){       // Delete Array A.
            delete [] A;
            A=B;
            capacity = N;
        }
    }
}


void ArrayVector::insert(int i, const Elem &e) {
    if(n>=capacity){
        reserve(max(1,2*capacity));
    }
    for(int j = n-1; j>=i; j--){
        A[j+1] = A[j];
    }
    A[i] = e;
    n++;
}














