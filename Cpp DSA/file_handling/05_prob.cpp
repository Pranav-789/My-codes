#include<bits/stdc++.h>
#include<vector>
#include<fstream>

using namespace std;

int main(){

    vector<int> v;

    ifstream fin;
    fin.open("p1.txt");

    int n;

    while(fin >> n){
        cout << n << " ";
        v.push_back(n);
    }

    fin.close();

    ofstream fout;
    fout.open("p1.txt");
    fout << "Original Array: ";
    for(int i = 0; i < v.size(); i++){
        fout << v[i] << " ";
    }
    sort(v.begin(), v.end());
    fout << "\nSorted Array: ";
    for(int i = 0; i < v.size(); i++){
        fout << v[i] << " ";
    }

    fin.close();
}