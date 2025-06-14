#include<bits/stdc++.h>
#include<fstream>
using namespace std;

//filebuf open and close
//fstreambase base class of fstream, ifstream, ofstream
//ifstream get(), getline(), read(), seekg(), tellg()
//ofstream put(), write(), seekp(), tellp();

int main(){

    ofstream fout("out.txt");
    char str[] = "This is a txt file";

    int i = 0;
    while(str[i]){
        fout.put(str[i++]);
    }
    fout.close();
    return 0;
}