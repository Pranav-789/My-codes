#include<iostream>
#include<queue>
using namespace std;

int main(){
    //all elements when output, maximum element will come out
    priority_queue<int> maxi;
    //this was max heap;

    priority_queue<int, vector<int>, greater<int> > mini; //minimum heap

    maxi.push(1);
    maxi.push(5);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();

    for(int i = 0; i < n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(1);
    mini.push(5);
    mini.push(2);
    mini.push(0);

    for(int i = 0; i < n; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"Empty? "<<mini.empty()<<endl;
}