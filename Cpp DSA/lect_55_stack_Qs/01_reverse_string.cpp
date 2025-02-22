#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> rev;
    string s;
    string r;
    cout << "Enter the string: ";
    cin >> s;
    for (int i = 0; s[i]!='\0'; i++)
    {
        rev.push(s[i]);
    }
    for (int i = 0; i < s[i]!='\0'; i++)
    {
        r.push_back(rev.top());
        rev.pop();
    }
    cout << "Reverse string: " << r << endl;
    return 0;
}