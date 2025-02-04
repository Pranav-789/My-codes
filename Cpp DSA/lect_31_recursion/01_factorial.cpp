#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    //or u can use following method
    // int smallprob = factorial(n-1);
    // int bigprob = n * smallprob
    // return bigprob

    return n * factorial((n-1));

}

int main(){

    int n; 

    cin >> n;

    cout << "Enter n: " << endl;

    int ans = factorial(n);

    cout << ans << endl;
    cout << n << endl;
    return 0;
}