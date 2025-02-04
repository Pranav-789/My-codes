#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "Pranav";

    name[3] = 'y';
    cout<<name[0]<<endl;

    cout<<name<<endl;
    sort(name.begin(), name.end());
    reverse(name.begin(), name.end());
    cout<<name<<endl;
    return 0;
}

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum+=arr[i];
//     }

//     cout<<sum<<endl;
    
//     sort(arr, arr+n);

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
//     return 0;
// }