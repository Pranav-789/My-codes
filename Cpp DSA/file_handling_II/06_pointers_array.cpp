#include<iostream>
using namespace std;

int main(){
    int x[5] = {1, 2, 3, 4, 5};
    int *ptr = x;
    //ptr++ is valid
    //x++ is invali, x is a constant pointer
    cout << *ptr++ << endl;
    cout << *ptr << endl;
    cout << x[0] << endl;
    cout << x[1] << endl;
    ptr++;
    cout << *ptr;

    return 0;
}