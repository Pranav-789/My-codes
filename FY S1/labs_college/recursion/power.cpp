#include<iostream>
using namespace std;

int power(int n, int b){
    if(b == 0){
        return 1;
    }
    return n * power(n, b-1);
    return 0;
}

int main(){
    int n = power(5, 4);
    printf("%d\n", n);
    return 0;
}