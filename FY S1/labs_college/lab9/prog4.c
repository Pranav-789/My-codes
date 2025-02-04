#include<stdio.h>
void calc(int a, char op, int b);

int main () {
    int a, b;
    char op;

    printf("Enter the num1: ");
    scanf("%d", &a);

    printf("Enter the num2: ");
    scanf("%d", &b);

    printf("Enter operation: ");
    scanf(" %c", &op);

    calc(a, op, b);

    return 0;
}

void calc(int a, char op, int b){
    switch (op)
    {
    case '+':
        printf("The sum of %d and %d is %d\n", a, b, a+b);
        break;
    case '-':
        printf("The difference of %d and %d is %d\n", a, b, a-b);
        break;
    case '*':
        printf("The product of %d and %d is %d\n", a, b, a*b);
        break;

    case '/':
        printf("The divisio of %d and %d is %d\n", a, b, a/b);
        break;
    default:
        break;
    }
}