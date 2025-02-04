#include<stdio.h>

void ifprime(int n);

int main () {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    ifprime(n);
    return 0;
}

void ifprime(int n){
    int count = 0;
    for(int i = 2; i < n ; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("%d is a prime number\n", n);
        return;
    }
    else{
        printf("%d is not a prime number\n", n);
        return;
    }
}