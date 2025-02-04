#include<iostream>
using namespace std;

bool isEven(int a){
    if(a%2==1){
        return 0;
    }
    else{
        return 1;
    }
}

int main() {
    int num;
    cout<<"Enter num: ";
    cin>>num;

    if(isEven(num)==0){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }

    return 0;
}