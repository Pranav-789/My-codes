#include<stdio.h>

int main () {
    int marks[5];

    printf("Enter marks of 5 students\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("The address at index %d is %u\n", i, &marks[i]);
    }
    
    // you will observe in address that diff in them is of'4'
    
    return 0;
}