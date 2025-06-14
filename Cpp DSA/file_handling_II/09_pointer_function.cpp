#include<iostream>
using namespace std;

const int a = 15;
const int b = 12;

int multiply(){
    return a*b;
}

int add(){
    return a+b;
}

void print(int(*func)()){
    cout << "The value: " << func() << endl;
}

void pri(int (*func)(int, int), int a, int b){
    cout << func(a, b) << endl;
}

int mul(int a, int b){
    return a* b;
}

int main(){
    print(multiply);
    print(add);
    int (*func)(int, int);
    func = mul;
    int a = 6, b = 7;
    cout << func(a, b) << endl;
    pri(mul, 34, 10);
    return 0;
}