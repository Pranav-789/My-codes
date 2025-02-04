#include <stdio.h>

int main() {
    char choice;

    do{
    printf("Hello user\n To calculate area of rectangle\n");
    int l;
    int b;
    printf("Enter length\n");
    scanf("%d", &l);

    printf("Enter breadth\n");
    scanf("%d", &b);
    int c = l*b;

    printf("The area of rectangle %d\n", c);

    while ((getchar()) != '\n');

    printf("Do you want to calculate further? (y/n): \n");
    scanf("%c", &choice);
    }while (choice=='y' || choice=='Y');

    printf("See you again!");

    return 0;
}
