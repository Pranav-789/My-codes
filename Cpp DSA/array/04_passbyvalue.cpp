#include<iostream>
using namespace std;

int dummy(int n){
    n++;
    cout<< "n is equal to "<<n<<endl;
}

int main() {
    int n;
    cin>>n;

    dummy(n); //16

    cout<< "The value of n is "<< n << endl; //15

    // fuction cannot change value stored in a variable defined in main, the copy of value is passed to function
}