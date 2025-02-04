#include <bits/stdc++.h> 

bool checkPalindrome(string s)
{
    string check;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            check += s[i];
        } else if(s[i] >= 'A' && s[i] <= 'Z') { 
            check += s[i] + ('a' - 'A');
        }
        else if(s[i] >= '0' && s[i]<='9'){
            check += s[i];
        }
    }

    int b = 0, e = check.size() - 1;
    while(b < e) {
        if(check[b++] != check[e--]) {
            return false;
        }
    }
    return true;
}