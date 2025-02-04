#include<iostream>
using namespace std;

void printCounting(int n){

    for (int i = 0; i < n; i++)
    {
        cout<< i+1 << endl;
    }

}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;

    printCounting(n);
}
    
