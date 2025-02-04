#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size() -1;

    while(s<e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    print(v);

    vector<int> ans = reverse(v);

    print(ans);

}

// Problem statement
// Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

// Example:

// We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
// based indexing so the subarray {5, 6} will be reversed and our 
// output array will be {1, 2, 3, 4, 6, 5}.
// void reverseArray(vector<int> &arr , int m) {
//     int n = arr.size();
//     int s = m+1;
//     int e = n-1;

//     while(s<e){
//         swap(arr[s], arr[e]);
//         s = s+1;
//         e = e-1;
//     }
// }