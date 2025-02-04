#include<iostream>
#include<map>
using namespace std;

int main(){
    //like mathematics function graph

    map<int, string> m;

    m[1] = "Pranav"; 
    m[26] = "Yogesh";
    m[12] = "Zambare";

    m.insert({5, "Bheem"});

    cout<<"before erase "<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }//output will be in ordered manner

    cout<<"Finding 12 --> "<<m.count(12)<<endl;

    m.erase(12);
    cout<<"after erase "<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }//in ordered map erase, insert, find, count has complexity O(1)

    auto it = m.find(5);

    for(auto i = it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }//return the element and those left
}