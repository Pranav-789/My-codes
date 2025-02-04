//To calculate nth term of fibonacci series
#include<stdio.h>

int fib(int);

int fib(int n){
    if (n==1 || n==2)
    {
        return n-1;
    }
    
    return fib(n-1) + fib(n-2);
}

int main () {
    int n = 8;

    printf("The %dth term of fibonacci series id %d", n, fib(n));

return 0;
}