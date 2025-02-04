#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin>>b[j];
        }
        int m = 0, f = 0;
        int flag = 0;

        if(n == 1){
            cout << a[0] << endl;
            continue;
        }
        if(n > 1){
            for (int i = 0; i < n-1; i++)
            {
                if(a[i] > b[i+1]){
                    m= m + a[i];
                    f = f + b[i+1];
                    flag++;
                }
            }
            m = m + a[n-1];
            if(flag == 0){
                cout << a[n-1] << endl;
                continue;
            }
            else{
                cout << m-f << endl;
                continue;
            }
        }
    }
    return 0;
}