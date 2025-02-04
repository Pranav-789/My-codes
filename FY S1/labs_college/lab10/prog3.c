#include<stdio.h>

void factorial(int *n, int *result){
    *result = 1;
    for(int i = 1; i <= *n; i++){
        *result = *result * i;
    }
}

int main () {
    int n, fact;
    printf("Enter the number: ");
    scanf("%d", &n);

    factorial(&n, &fact);

    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}