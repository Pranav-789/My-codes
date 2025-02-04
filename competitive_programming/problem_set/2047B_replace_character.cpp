// #include<iostream>
// using namespace std;

// char count(string s){
//     int arr[256] = {0};
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         arr[ch]++;
//     }
//     int max = 0;
//     int ind;

//     for (int j = 0; j < 256; j++)
//     {
//         if(arr[j] > max){
//             max = arr[j];
//             ind = j;
//         }
//     }
    
//    return ind; 
// }

// int main(){
//    int t;
//    cin>>t;

//    while (t--)
//    {
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     char x = count(s);
//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s[i]!=x){
//             s[i] = x;
//             break;
//         }
//     }
//     cout<<s<<endl;
//    }   
// }

#include <iostream>
#include <string>
using namespace std;

char getMaxFrequencyChar(const string &s) {
    int freq[26] = {0}; 
    for (char ch : s) {
        freq[ch - 'a']++;
    }

    char maxChar = s[0];
    int maxFreq = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = 'a' + i;
        } else if (freq[i] == maxFreq) {
            maxChar = 'a' + i;
        }
    }

    return maxChar;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char mostFrequent = getMaxFrequencyChar(s);

        for (int i = 0; i < n; i++) {
            if (s[i] != mostFrequent) {
                s[i] = mostFrequent;
                break;
            }
        }

        cout << s << endl;
    }

    return 0;
}
