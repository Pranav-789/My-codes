#include<bits/stdc++.h>
using namespace std;

int digSum(int n){
    if(n == 0) return 0;
    return n%10 + digSum(n/10);
}

int main(){
    int n = 1234;
    cout << digSum(n) << endl;
    return 0;
}