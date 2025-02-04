#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout<<"Finding 5 "<<binary_search(v.begin(), v.end(), 5)<<endl;
    //return bool 0 = false, 1 = true;

    cout<<"lower bound "<<lower_bound(v.begin(), v.end(), 5)-v.begin()<<endl;
    //return iterator
    cout<<"upper bound "<<upper_bound(v.begin(), v.end(), 5)-v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"max ->" <<max(a,b)<<endl;

    cout<<"min ->" <<min(a,b)<<endl;

    swap(a, b);

    cout<<"a = "<< a <<endl;

    string s = "abcd";

    reverse(s.begin(), s.end());
    cout<<"string ->"<<s<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    for(int i:v){
        cout<<i<<" ";
    }
}