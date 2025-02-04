// Alice and Bob invented a brand-new algorithm - but they can't decide what to name it!

// Alice suggested the name 
// S
// A
// S 
// A
// ​
//  , and Bob suggested the name 
// S
// B
// S 
// B
// ​
//  . (
// S
// A
// S 
// A
// ​
//   and 
// S
// B
// S 
// B
// ​
//   are both strings of lowercase English letters.)

// However, Alice thinks Bob's naming sense is really bad - she'll only be happy if the name given to the algorithm is not close to 
// S
// B
// S 
// B
// ​
//   at all.
// More specifically, Alice will be happy if and only if the algorithm's name does not share any characters with 
// S
// B
// S 
// B
// ​
//  .

// Similarly, Bob thinks Alice's naming sense is really bad, and will only be happy if the algorithm's name doesn't share any characters with 
// S
// A
// S 
// A
// ​
//  .

// Is there a way to name the algorithm (using only lowercase English letters) so that both Alice and Bob are happy?

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of three lines of input.
// The first line of each test case contains two space-separated integers 
// N
// N and 
// M
// M — the length of 
// S
// A
// S 
// A
// ​
//   and the length of 
// S
// B
// S 
// B
// ​
//  , respectively.
// The second line contains the string 
// S
// A
// S 
// A
// ​
//  .
// The third line contains the string 
// S
// B
// S 
// B
// ​
//  .
// Output Format
// For each test case, output on a new line the answer: "YES" if a valid name exists for the algorithm, and "NO" otherwise.

// Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings NO, No, nO, and no will all be treated as equivalent.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string stringA, stringB;
        int n, m;
        cin >> n >> m;
        cin >> stringA >> stringB;
        bool found = false;

        for(char ch = 'a'; ch < 'z'; ch++){
            bool ok = true;
            for(int i = 0; i < n; i++){
                if(stringA[i] == ch){
                    ok = false;
                    break;
                }
            }
            for(int i = 0; i < m; i++){
                if(stringB[i] == ch){
                    ok = false;
                    break;
                }
            }
            
            if(ok){
                found = true;
                break;
            }
        }
        
        if(found){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
