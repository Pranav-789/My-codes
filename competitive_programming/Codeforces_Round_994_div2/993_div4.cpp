// //A. Easy problem

// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         // b != n && a != n
//         // a can take values from 1 to n-1
//         if(n == 1){
//             cout << 0 << endl;
//         }
//         cout << n-1 << endl;
//     }
// }

// //B.Normal Problem
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>> t;

//     while(t--){
//         string s;
//         cin>>s;
//         reverse(s.begin(), s.end());

//         for (int i = 0; i < s.length(); i++)
//         {
//             if(s[i]=='q'){
//                 s[i] = 'p';
//             }
//             else if(s[i]=='p'){
//                 s[i] = 'q';
//             }
//         }
//         cout << s << endl;
//     }
// }

// //C. Hard Problem
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int m, a, b, c;
//         cin>> m >> a >> b >> c;
//         int s = 2*m;
//         int sum1 = a+b+c;
//         if(m > a){
//             s = s - a;
//             a = 0;
//         }
//         else{
//             s = s - m;
//             a = a - m;
//         }

//         if(m > b){
//             s = s - b;
//             b = 0;
//         }
//         else{
//             s = s - m;
//             b = b - m;
//         }

//         if(s!=0){
//             if(s > c){
//                 s = s - c;
//                 c = 0;
//             }
//             else{
//                 c = c - s;
//             }
//         }
//         int sum2 = a + b + c;

//         cout << sum1 - sum2 << endl;
//     }
// }

// D. Harder Problem
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];

        vector<int> b;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            int num = a[i];
            freq[num]++;
        }

        
        
        
    }
}