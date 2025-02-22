//follow last in first out (LIFO)
#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creating stack
    stack<int> s;
    s.push(1);
    s.push(5);
    s.push(10);

    s.pop();

    cout << "Top element: " << s.top()<<endl;
    if(s.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty!" << endl;
    }
    cout << "Size of stack is: " << s.size() << endl;
    return 0;
}