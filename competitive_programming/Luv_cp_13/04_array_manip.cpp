#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
long long int ar[N];

int main(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int a, b, d;
        cin >> a >> b >> d;
        ar[a] += d;;
        ar[b+1] -= d;
    }

    long long mx = -1;
    for(int i = 1; i <= n; i++){
        ar[i] = ar[i] + ar[i-1];
        if(mx<ar[i]){
            mx = ar[i];
        }
    }

    cout << mx << endl;
    //TC O(M * n + n) = 2*10^5 * 10^7 (before)
    //TC O(M) + o(n) = 2*10^5 + 10^7 ~= 10^7 (AFTER PREFIX SUM)
    return 0;
}