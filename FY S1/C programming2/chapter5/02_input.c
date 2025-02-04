#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y) {
    printf("The sum is %d", x+y);
    return x + y;
}

int main() {
    char choice;

    do{    
    int a;
    int b;

    printf("Enter 'a': \n");
    scanf("%d", &a);

    printf("Enter 'b': \n");
    scanf("%d", &b);

    sum(a, b);

    printf("Do you want to continue? (y/n)\n");
    scanf(" %c", &choice);

    } while (choice == 'y' || choice=='Y');

    printf("Goodbye!\n");

    return 0;
}