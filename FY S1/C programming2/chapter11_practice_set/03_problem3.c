#include<stdio.h>
#include<stdlib.h>

int main () {
    int n = 6;
    int* ptr;
    ptr = (int*) calloc(n, sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("enter integer for index %d: ", i);
        scanf("%d", &ptr[i]);
        printf("\n");
    }

     for (int i = 0; i < 6; i++)
    {
        printf("The value of integer for index %d is %d\n", i, ptr[i]);
        printf("\n");
    }
       
    return 0;
}