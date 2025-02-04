#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;

    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    
    return fact;
}

int ncr(int n, int r){
    int ans = factorial(n)/(factorial(n-r) * factorial(r));
    return ans;
}

int main() {

    int n, r;
    cout<<"Enter n and r: ";
    cin>> n >> r;

    cout<<"nCr of "<<n<<" and "<<r<<" is "<<ncr(n, r)<<endl;

}