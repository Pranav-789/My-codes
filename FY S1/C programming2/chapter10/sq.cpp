// #include<iostream>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     int i = 0;
    
//     while(s[i] != '\0'){
//         int j = i+2;
//         while(s[j] != '\0'){
//             if(s[i] > s[j]){
//                 char temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//             j = j+2;
//         }
//         i = i+2;
//     }
//     cout << s << endl;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     int i = 0;

//     int n = s.length();

//     for(int i = 0; i < n; i+=2) {
//         int j = i + 2;
//         for(int j = i+2; j < n; j+=2){
//             if (s[i] > s[j]) {
//                 char temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }
    
//     cout << s << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;

//     if(s[0] >= 'a' && s[0] <= 'z'){
//         s[0] = s[0] - 32;
//     }
//     cout<<s<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;

//     int arr[256]={0};
//     int count = 0;
//     int n = s.length();

//     for (int i = 0; i < n; i++)
//     {
//         char ch = s[i];
//         arr[ch]++;
//     }
    
//     for (int i = 0; i < 256; i++)
//     {
//         if(arr[i]!= 0){
//             count++;
//         }
//     }

//     if(count%2==0){
//         cout<<"CHAT WITH HER!"<<endl;
//     }
//     else{
//         cout<<"IGNORE HIM!"<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(b!= 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        int sum = 0;
        int max = -1;

        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                if(gcd(arr[i], arr[j]) == 1){
                    sum = i+j+2;
                    if(sum > max){
                        max = sum;
                    }
                }
            }
            if(arr[i]==1){
                sum = 2*i+2;
                if(sum > max){
                    max = sum;
                }
            }
        }
        cout<<max<<endl;
    }
}