#include <iostream>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <string>


using namespace std;

int main() {
    //std::cout << "Hello, World!" << std::endl;

    list <int>lr = { 1,2,4,5,9,10};


    /*
     * stack <int , list<int>> sta(lr);

    cout << "The size of stack is " << sta.size() <<endl << "The size of the list is " << lr.size() <<endl;
    while(!sta.empty()){
        cout << sta.top();
        sta.pop();

    }
    cout << endl;
    for (auto j : sta){
        cout << j ;
    }

*/
    stack <string > ss;
    ss.push("one");
    ss.push("two");
    ss.push("three");
    ss.push("four");
    ss.push("five");
    ss.push("six");

    cout << "The size of the stack is " << ss.size() << endl;

    while(!ss.empty()){
        cout << ss.top() << endl;
        ss.pop();
    }
    cout << endl;
    cout << "The size of the stack is " << ss.size();
// Queue Fifo
    queue<string>qs;
    qs.push("moses");
    qs.push("miriam");
    qs.push("josh");
    qs.push("james");
    qs.push("micheal");

    cout << "The size of the the queue is " << qs.size() << endl ;

    while(!qs.empty()){
        cout << qs.front() <<endl;
        qs.pop();
    }
    cout << endl;

    cout << "The size of the the queue is " << qs.size() <<endl;

    // Deque stands for double ended queue
    deque<string >dequestr;
    dequestr.push_back("one1 ");
    dequestr.push_back("two2 ");
    dequestr.push_back("three3 ");
    dequestr.push_back("four4 ");
    dequestr.push_back("five5 ");
    dequestr.push_back("six6 ");

    cout << "The size of the the dequeue is " << dequestr.size() << endl;
    // Deque can push and pop things from both front and back
    cout << "Front is " << dequestr.front() << endl;
    cout << "Back is " << dequestr.back() << endl;

    dequestr.pop_back();
    for(string s: dequestr){
        cout << s ;
    }
    cout << endl;

    dequestr.pop_front();
    for(string s:dequestr){
        cout << s;
    }
    cout << endl;

    dequestr.push_front("newfront ");
    for(string s:dequestr){
        cout << s;
    }
    cout <<endl;

    dequestr.push_back("newback ");
    for(string s:dequestr){
        cout << s;
    }
    cout << endl; 



    return 0;
}