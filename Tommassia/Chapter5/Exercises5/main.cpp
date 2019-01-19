#include <iostream>
#include <stack>
using namespace std;

void recur(stack<int >a){
    if(a.size()==0){
        cout << "Stack is empty";
        cout << a.size();
    } else{
        //pop();
        recur(a);
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::stack <int>stack1 = {5,6,7,8};
   // recur(stack1);
    return 0;
}