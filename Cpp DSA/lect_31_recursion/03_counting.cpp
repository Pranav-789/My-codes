#include<iostream>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }
    
    cout << n << endl;

    print(n-1);
}

void print2(int n){
    if(n == 0){
        return;
    }
    
    print2(n-1);

    cout << n << endl;
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    print(n);
    return 0;
}