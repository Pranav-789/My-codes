//recursive function to calculate first 'n' natural numbers
#include<stdio.h>

int sum(int);

int sum(int n){
    if (n==1)   
    {
        return 1;
    }
    return n + sum(n-1);
    
}

int main () {
    int n;
    printf("Enter n");
    scanf("%d", &n);

    printf("The sum of first '%d' natural number is %d", n, sum(n));
    return 0;
}