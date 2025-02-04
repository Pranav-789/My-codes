// to check divisibilty
#include<stdio.h>

int main () {
    int choice;

    do
    {
        int a;
        int b;
        printf("By what number do you want to divide?: ");
        scanf("%d", &a);

        printf("\nEnter the number to be divide: ");
        scanf("%d", &b);

        (b%a==0)?printf("%d is divisible by %d", b, a):printf("%d is not divisible by %d", b, a);

        printf("\nif you want to continue\n enter 1: ");
        scanf(" %d", &choice);

    } while (choice==1);

    printf("\nSee you again, Sayonara!");

    return 0;
}