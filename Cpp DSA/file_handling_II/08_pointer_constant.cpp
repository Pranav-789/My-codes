#include<iostream>
using namespace std;

// int* min(int& x, int& y){
//     return (x<y)? &x: &y;
// }

// int main(){
//     //constant pointer
//     int x = 10, y = 20;
//     int *c = min(x, y);
//     cout << *c << endl;

//     return 0;
// }

int main(){

    int val = 5;
    int y = 10;

    const int *ptr = &val;

    cout << *ptr << endl;
    val++;
    cout << *ptr<<endl;
    // (*ptr)++; // the error will be due to modifying const int*
    // cout << *ptr << endl;

    // ptr = &y;

    // cout << *ptr << endl;//address can be changed but value cant be

    int* const ptr2 = &y;
    y++;
    cout << *ptr2 << endl;
    (*ptr2)++;
    cout << *ptr2 << endl;

    int z = 30;
    const int* const ptr3 = &z;

    z++;
    cout << *ptr3 << endl;


    return 0;
}