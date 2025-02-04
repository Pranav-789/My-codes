#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int arr[3] = {a, b, c};
        int s = 0, count = 0;

        for (int i = 0; s<n; i++)
        {
            s += arr[i % 3];
            count++;
        }
        
        cout << count << endl;

    }
    return 0;
}