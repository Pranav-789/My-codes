#include<iostream>
using namespace std;

int main(){
    char ch[6] = "abcde";

    cout << ch << endl;

    char *ptr = &ch[3];
    //prints entire string
    cout << ptr << endl;

    char temp = 'x';

    char *ptr2 = &temp;

    cout << ptr2 << endl;
    return 0;
}