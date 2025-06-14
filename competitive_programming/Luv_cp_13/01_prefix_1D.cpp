#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];

int main()
{
    int n;
    cin >> n;
    a[0] = 0;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        a[i] = a[i] + a[i-1];
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        long long sum = a[r] - a[l-1];
        cout << sum << endl;
    }//O(N) + O(Q*N) = 10^10 //if we used for in while from l to r
    // now the complexity is O(N) + O(Q) = 10^5
    
    return 0;
}