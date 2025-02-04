#include<stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3.0; // as the avg will not give the exact value of an non 3devi avg
    // we have to make one float
}

int main () {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("The average of a, b, c is %.2f", average(a, b, c));

    return 0;
}