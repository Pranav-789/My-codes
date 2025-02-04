#include<iostream>
using namespace std;

int get_size(){
    return 0;
}

int main(){
    const int buffsize = 256;
    //buffsize = 512;//will throw a error
    const int i = get_size(); 
    const int k; // error as k is uninitialized
}