#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int size = 2 * n - 1;
    int k = n;
    //upper half
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << k;
            k--;
        }
        for(int  l= 0; l < 2*n-1 - 2*i; l++){
            cout << k;
        }

        for(int j = 0; j < i; j++){
            k++;
            cout << k;
        }
        cout << endl;
    }
    
    return 0;
}