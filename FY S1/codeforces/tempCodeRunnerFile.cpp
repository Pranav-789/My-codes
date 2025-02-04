#include<iostream>
using namespace std;

int main() {
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;

    int n = s1.length();
    int lex = 0;

    for (int i = 0; i < n; i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z'){
            s1[i] = s1[i] + 32;
        }

        if(s2[i]>='A' && s2[i]<= 'Z'){
            s2[i] = s2[i] + 32;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(s1[i] == s2[i]){
           lex = 0; 
        }
        else if(s1[i] > s2[i]){
            lex = 1;
            break;
        }
        else{
            lex = -1;
            break;
        }
    }

    cout << lex << endl;
    
    return 0;
}