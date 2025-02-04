#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;

    string s2;
    int j = 0;
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(!(s[i]=='a'|| s[i]=='e'||s[i]=='o'|| s[i] == 'u'|| s[i]=='i'|| s[i]== 'y'|| s[i]=='A'|| s[i]=='E'||s[i]=='O'|| s[i] == 'U'|| s[i]=='I'|| s[i]== 'Y')){
            s2 += '.';
            s2 += tolower(s[i]);
        }
    }
    cout<<s2<<endl;
    return 0;
}