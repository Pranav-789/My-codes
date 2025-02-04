#include<bits/stdc++.h>
using namespace std;

int main(){
      
    int num = 5;

    cout << num << endl;

    //cout <<"The address of num is " << int(&num) << endl;
    // cout <<"The address of num is " << &num << endl;

    int *ptr = &num;

    cout <<"The address of num is " << ptr << endl;

    cout <<"The address of ptr is " << &ptr << endl;

    cout << "The value of num is " << *ptr <<endl;

    double d = 4.3;
    double *ptr2 = &d;

    cout <<"The address of d is " << ptr2 << endl;

    cout <<"The address of ptr2 is " << &ptr2 << endl;

    cout << "The value of d is " << *ptr2 <<endl;

    // int  *p = 0;
    // p = &num;
    // this is initializing the pointer


    int *p = &num;
    cout << "Before " << num << endl;
    (*p)++;
    cout << "After " << num << endl;


    //copying a pointer
    int *q = p;
    cout << p << " " << q << endl;
    cout << *p << " - " << *q << endl;

    return 0;
}