#include<iostream>
using namespace std;

int main(){
    // int i = 3;
    // int j = 3;
    // int *t = &i;
    // //cout << (*t)++ << endl;
    // *t = *t + 1;
    // cout << *t << endl;
    // t = t + 1;
    int p = 8;
    int f = 2;

    int *ptr = &p;
    *ptr = f;
    cout << *ptr << endl;
}