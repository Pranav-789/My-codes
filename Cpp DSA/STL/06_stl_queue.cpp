#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Pranav");
    q.push("Yogesh");
    q.push("Zambare");

    cout<<"size is before pop "<<q.size()<<endl;

    cout<<"The first element "<<q.front()<<endl;
    q.pop();
    cout<<"The first element "<<q.front()<<endl;

    cout<<"size is after pop "<<q.size()<<endl;
    //for empty q.empty();
}