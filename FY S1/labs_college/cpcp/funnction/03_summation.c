#include<stdio.h>

int sum(int a, int b){
    return a + b;
}

int main () {
    char choice;
    
    do
    {
        int a, b;
        printf("Enter a: ");
        scanf("%d", &a);

        printf("Enter b: ");
        scanf("%d", &b);

        printf("The sum of a and b is %d\n", sum(a, b));

        printf("To continue press Y, to leave press any key: ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    
    return 0;
}