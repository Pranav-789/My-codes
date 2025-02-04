#include<stdio.h>

void oddeve(int n);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    oddeve(n);

    return 0;
}

void oddeve(int n){
    if(n % 2 == 0){
        printf("%d is even number\n", n);
        return;
    }
    else{
        printf("%d is odd number\n", n);
        return;
    }
}