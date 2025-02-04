#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    int size = 2 * n -1;
    for(int i = 0; i < size; i++){
        for (int j = 0; j < n; j++)
        {
            cout << n << " ";
        }
        n--;
        cout << endl;
    }

    return 0;
}
