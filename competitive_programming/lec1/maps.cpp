#include<iostream>
#include<bits/stdc++.h>
#include<map>

using namespace std;

int main(){
    multimap<int, string>mp;
    pair<int, string>p1={1, "abhinav"};
    mp.insert(p1);

    for(auto &it:mp){
        cout<<it.first<<" "<<it.second<<"\n";
    }
}