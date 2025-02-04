#include<stdio.h>
int power(int a, int b);

int main () {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int b;
    printf("Enter the power: ");
    scanf("%d", &b);

    int p = power(n, b);

    printf("Answer: %d", p);
    return 0;
}

int power(int a, int b){
    int product = 1;
    while (b != 0)
    {
        product = product * a;
        b--;
    }
    return product;
}