#include<iostream>
using namespace std;

// void fibonac(int n, int f, int s){
//     if(n == 0){
//         return;
//     }
//     cout<< f << endl;
//     int temp = f + s;
//     f = s;
//     s = temp;
//     fibonac(n-1, f, s);
//     return;
// }

// 
// int fibo(int n){
//     if(n == 1 || n == 2){
//         return 1;
//     }
//     int ans1 = fibo(n-1);
//     int ans2 = fibo(n-1);
//     int ans = ans1 + ans2;
//     return ans;
// }
int fibo(int n){
    if(n <= 2){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n = 3;
    cout<<fibo(n);
    //fibonac(n, 0, 1);
}