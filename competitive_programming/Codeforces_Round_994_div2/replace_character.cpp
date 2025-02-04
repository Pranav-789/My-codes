// #include <iostream>
// #include <string>
// using namespace std;

// char getMaxFrequencyChar(const string &s) {
//     int freq[26] = {0}; 
//     for (char ch : s) {
//         freq[ch - 'a']++;
//     }

//     char maxChar = s[0];
//     int maxFreq = 0;

//     for (int i = 0; i < 26; i++) {
//         if (freq[i] > maxFreq) {
//             maxFreq = freq[i];
//             maxChar = 'a' + i;
//         } else if (freq[i] == maxFreq) {
//             maxChar = 'a' + i;
//         }
//     }

//     return maxChar;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         char mostFrequent = getMaxFrequencyChar(s);

//         for (int i = 0; i < n; i++) {
//             if (s[i] != mostFrequent) {
//                 s[i] = mostFrequent;
//                 break;
//             }
//         }

//         cout << s << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
#include <vector>
using namespace std;

char getMaxFrequencyChar(const string &s) {
    int freq[26] = {0};

    // Calculate frequency of each character
    for (char ch : s) {
        freq[ch - 'a']++;
    }

    // Find the most frequent character (smallest lexicographically in case of ties)
    char maxChar = 'a';
    int maxFreq = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq || (freq[i] == maxFreq && i + 'a' < maxChar)) {
            maxFreq = freq[i];
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

        // Get the most frequent character
        char mostFrequent = getMaxFrequencyChar(s);

        // Replace the first non-most-frequent character
        for (int i = 0; i < n; i++) {
            if (s[i] != mostFrequent) {
                s[i] = mostFrequent;
                break;
            }
        }

        // Output the transformed string
        cout << s << endl;
    }

    return 0;
}
