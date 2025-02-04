#include<iostream>
using namespace std;

void increasing(int n){
    if(n==0){
        return;
    }
    printf("%d\n", n);
    increasing(n-1);
    printf("%d\n", n);
    return;
}

int main (){
    increasing(5);
    return 0;
}