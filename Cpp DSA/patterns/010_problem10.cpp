#include<iostream>
using namespace std;

int main() {
    int n = 4;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=4)
        {
            cout << j << " ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}