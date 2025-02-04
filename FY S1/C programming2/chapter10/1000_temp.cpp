#include<iostream>

int main(){
    string s;
    cin>>s;
    int i = 0;
    
    while(s[i] != '\0'){
        int j = i+2;
        while(s[j] != '\0'){
            if(s[i] > s[j]){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                j = j+2;
            }
        }
        i = i+2;
    }
    cout << s << endl;
}