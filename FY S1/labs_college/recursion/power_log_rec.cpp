#include<iostream>
using namespace std;

// int power(int a, int b){
//     if(b == 1){
//         return a;
//     }
//     int x = power(a, b/2);
//     return x * x;
// }

int power(int a, int b){
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    int x;
    if(b % 2 == 0){
    x = power(a, b/2);
    }
    else{
        x = power(a, b/2);
        return a*x*x;
    }
    return x * x;
}

int main(){
    int n = power(3, 1);
    cout<< n<< endl;
}