#include<iostream>
using namespace std;

int main() {
    int n = 4;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            int count = 1*i;
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
        
    }
    
}