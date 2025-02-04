#include<stdio.h>

int main () {
    int age;
    char f;

    printf("Enter gender: ");
    scanf("%c", &f);

    printf("Enter your age: ");
    scanf(" %d", &age);
    

    printf("Your age is %d and gender is %c", age, f);
    return 0;
}