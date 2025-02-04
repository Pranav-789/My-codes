#include<stdio.h>
int factorial(int n);
int seriessum(int n);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int s = seriessum(n);

    printf("%d is sum of %d terms\n", s, n);
    return 0;
}

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int seriessum(int n){
    int sum = 0;
    while(n != 0){
        sum = sum + factorial(n)/n;
        n--;
    }
    return sum;
}