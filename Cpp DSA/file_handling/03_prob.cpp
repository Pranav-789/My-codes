#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main(){
    vector<int> arr(5);
    cout << "Enter the input ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    ofstream datafile;
    datafile.open("vec.txt");
    datafile << "Original Data\n";
    for(int i = 0; i < 5; i++){
        datafile << arr[i] << " ";
    }

    datafile << "\nSorted Data\n";
    
    sort(arr.begin(), arr.end());
    for(int i = 0; i < 5; i++){
        datafile << arr[i] << " ";
    }
    
    datafile.close();

    return 0;
}