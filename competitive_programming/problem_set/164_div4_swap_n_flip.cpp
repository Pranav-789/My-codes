//codechef - passed
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        string s;
        string t;
        cin>>s;
        cin>>t;
        int count_s1 = 0; 
        int count_t1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count_s1++;
            }

            if (t[i]=='1')
            {
                count_t1++;
            }
        }
        if((count_s1 == count_t1) || (count_s1%2==0 && count_t1%2==0) || (count_s1%2==1 && count_t1%2==1)){
            cout<<"YES"<<endl;
        }
        else if (count_s1%2==1 || count_t1%2==1)
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}