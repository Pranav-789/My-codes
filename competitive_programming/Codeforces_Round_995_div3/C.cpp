#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n, m, k;
        cin>>n >> m >> k;
        int a[m], q[k];
        int sum_a = 0, sum_q = 0;
        string s;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            sum_a += a[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> q[i];
            sum_q += q[i];
        }
        

        if(k == n){
            for(int i = 0; i < m; i++){
                s += '1';
            }
        }

        if(k <= n-2){
            for(int i = 0; i < m; i++){
                s += '0';
            }
        }

        if(k == n-1){
            int x = sum_a - sum_q;

            for (int i = 0; i < m; i++)
            {
                if(a[i] == x){
                    s += '1';
                }
                else{
                    s += '0';
                }
            }
            
        }
        
        cout << s << endl;
   
    }
    return 0;
}