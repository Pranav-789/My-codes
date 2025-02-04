#include<iostream>
#include<set>
using namespace std;

int main(){
    //store onlly if element is unique to it, element are fetched in a sorted order
    //you can not modify set
    //only operation are push and pop

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(0);
    s.insert(6); //insert, find, erase, count has time complexity O(logn)

    for(auto i : s){
        cout<<i<<endl;
    }cout<<endl;

    //s.erase(s.begin());

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i : s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"5 is present or not? "<<s.count(5)<<endl;

    //s.find is needed
}