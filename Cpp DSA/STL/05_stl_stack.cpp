#include<iostream>
#include<stack>
using namespace std;

int main(){
    //last in first out
    stack<string> s;

    s.push("Pranav");
    s.push("Yogesh");
    s.push("Zambare");

    cout<<"Top element is "<<s.top()<<endl;

    s.pop();
    cout<<"Top element is "<<s.top()<<endl;

    cout<<"The size of stack is "<<s.size()<<endl;

    cout<<"empty or not--> "<<s.empty()<<endl; //0 = false, 1 = true;
}