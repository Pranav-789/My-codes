#include<iostream>
using namespace std;

int main() {
    int i = 1;
    // int j = 1;
    // if j is defined out loop it will not be executed again

    while (i<=4)
    {
        int j = 1;
        while (j<=4)
        {
            cout << '*' << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    
}