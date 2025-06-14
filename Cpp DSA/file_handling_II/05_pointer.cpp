#include<iostream>
using namespace std;

int main(){
    int a = 50;
    int* ptr = &a;

    cout << "The value of a: " << *ptr<< endl;
    cout << "The address of a: " << ptr<< endl;

    // cout << *ptr++ << endl;
    // cout << "The value of a: " << *ptr<< endl;
    // cout << "The address of a: " << ptr<< endl;

    // cout <<*++ptr<<endl;
    // cout << "The value of a: " << *ptr<< endl;
    // cout << "The address of a: " << ptr<< endl;

    cout <<++*ptr<<endl;
    cout << "The value of a: " << *ptr<< endl;
    cout << "The address of a: " << ptr<< endl;

    // cout <<(*ptr)++<<endl;
    // cout << "The value of a: " << *ptr<< endl;
    // cout << "The address of a: " << ptr<< endl;

    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){

//     return 0;
// }