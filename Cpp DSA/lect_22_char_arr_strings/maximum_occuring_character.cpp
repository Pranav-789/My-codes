#include<iostream>
using namespace std;

char getMaxOccCh(string s){
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        int n = 0;

        if(ch >= 'a' && ch <= 'z'){
            n = ch - 'a';  
        }
        else
        {
            n = ch - 'A';
        }

        arr[n]++;        
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
    
}

int main() {
    string s;
    cin>>s;

    cout<<getMaxOccCh(s);

    s[10] = '@40';

    return 0;
}