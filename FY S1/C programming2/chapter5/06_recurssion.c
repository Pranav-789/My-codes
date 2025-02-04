#include<stdio.h>

int factorial(int);

int factorial(int n){ //base condition
    if(n==1 || n==0){
        return 1;
    }
    return factorial(n-1) * n;
}

int main () {
    char choice;
    do
    {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("The factorial of %d is %d\n", a, factorial(a));

    while (getchar() != '\n');

    printf("Do you want to continue further?\n");
    printf("enter (y/n): ");
    scanf(" %c", &choice);

    } while (choice=='y'||choice=='Y');

    printf("signing off, Bye!");

    return 0;
}