#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6, 10);//size of vector 6 and each element = 10

    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    v.push_back(4);
    v.push_back(9);
    v.push_back(1);
    v.pop_back();


    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    v.insert(v.begin()+2, 10);

    for(auto &it:v){
        cout<<it<<" ";
    }
    return 0;
}