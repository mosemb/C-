#include <iostream>


int recur(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*recur(n-1);
    }

}

int sumRecur(int A[], int n){
    if (n==1){
        return A[0];
    } else{
        return sumRecur(A,n-1)+A[n-1];
       // LinearSum(A, n − 1) + A[n − 1]
    }
}

int reverse(int A[], int i , int j){
    if(i<j){
        i =j;
      return   j=i;
    }
    else {
        return reverse();
    }
}

int main() {
    int A[]= {4,6};
    int n = 2;
    //sumRecur(A,n);
    int f = sumRecur(A,2);

  int  y= recur(5);
    std::cout << f<< std::endl;
    return 0;
}