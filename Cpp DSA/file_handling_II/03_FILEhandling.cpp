#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main(){
    int num = 12345;
    int num2 = 54321;
    ofstream fout("data.bin", ios::binary);
    fout.write((char*)&num, sizeof(num));
    fout.write((char*)&num2, sizeof(num2));
    fout.close();

    int readNUM = 0;
    int readNUM2 = 0;
    ifstream fin("data.bin", ios::binary);
    fin.read((char*)&readNUM, sizeof(readNUM));
    fin.read((char*)&readNUM2, sizeof(readNUM2));
    fin.close();

    cout << "READ number: " << readNUM << endl;
    cout << "READ number: " << readNUM2 << endl;
    return 0;
}