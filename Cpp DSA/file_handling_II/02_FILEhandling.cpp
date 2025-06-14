#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    char ch;
    ifstream fin("out.txt");
    ch = fin.get();
    while(!fin.eof()){
        cout << ch;
        fin.get(ch);
    }
    fin.close();
    return 0;
    //reads one extra value because of eof stops after file end -> one extra iteration -> garbage value;

    // char ch;
    // ifstream fin("out.txt");

    // while (fin.get(ch)) {  // This checks read success
    //     cout << ch;
    // }

    // fin.close();
    // //fixes above problem
    return 0;
}