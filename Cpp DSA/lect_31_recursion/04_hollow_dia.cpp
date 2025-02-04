#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int k = n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= k-1; j++){
            cout << " ";
        }
        cout << "*";

        if(i != 0){
            for(int l = 0; l < 2*i - 1; l++){
                cout << " ";
            }
            cout << "*";
        }

        for(int j = 0; j <= k-1; j++){
            cout << " ";
        }
        k--;
        cout << endl;
    }
    k++;

    for(int i = n-1; i; i--){
        for(int j = 0; j <= k-1; j++){
            cout << " ";
        }
        cout << "*";

        //if(i != 0){
            for(int l = 0; l < 2*i - 1; l++){
                cout << " ";
            }
            cout << "*";
        //}

        for(int j = 0; j <= k-1; j++){
            cout << " ";
        }
        k++;
        cout << endl;
    }


}