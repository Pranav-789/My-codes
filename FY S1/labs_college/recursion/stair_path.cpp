#include<iostream>
using namespace std;

int str_pth(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    int totalways =  str_pth(n-1) + str_pth(n-2);
    return totalways;
}

int main(){

    int n = str_pth(5);
    cout<< n;     
    return 0;
}