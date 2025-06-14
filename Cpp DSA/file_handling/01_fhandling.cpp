#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //file open 
    ofstream fout; //fout is object name
    fout.open("zoom.txt"); //opens file and if not present, create if not present

    //then you can write
    fout << "Hello Pranav"; //write in file

    fout.close(); //resoures are released

    return 0;
}