#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    set<int>st;
    st.insert(10);
    st.insert(7);
    st.insert(10);
    st.insert(10);
    st.insert(20);
    //set stores values uniquely and sorted manner
    for(auto &it:st){
        cout<<it<<" ";
    }
    cout<<'\n'<<endl;

    unordered_set<int>st2;
    st2.insert(10);
    st2.insert(7);
    st2.insert(10);
    st2.insert(10);
    st2.insert(20);
    //set stores values uniquely and unsorted manner
    for(auto &it2:st2){
        cout<<it2<<" ";
    }
    cout<<'\n'<<endl;

    multiset<int>s3;
    s3.insert(9);
    s3.insert(6);
    s3.insert(7);
    s3.insert(8);
    s3.insert(6);
    s3.insert(7);

    for(auto it3:s3){
        cout<<it3<<" ";
    }
    cout<<endl;

    return 0;
}