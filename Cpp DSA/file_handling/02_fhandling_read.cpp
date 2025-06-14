#include<iostream>
#include<fstream>

using namespace std;

int main(){

    // ifstream fin;

    // fin.open("zoom.txt");

    // char c;
    // fin >> c;

    // while(!fin.eof()){
    //     cout << c;
    //     fin >> c;
    // }

    // fin.close();
    //does'nt include whitespace in file

    ifstream fin;

    fin.open("zoom.txt");

    char c;
    c = fin.get();

    while(!fin.eof()){
        cout << c;
        c = fin.get();
    }

    fin.close();
    //solves whtespace issues
    return 0;
}