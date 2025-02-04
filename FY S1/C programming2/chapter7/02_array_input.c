#include<stdio.h>

int main () {
    int marks[5];

    printf("Enter marks of 5 students\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    
    printf("The marks are %d %d %d %d %d", marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}