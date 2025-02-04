#include<stdio.h>
#include<stdlib.h>
int main () {
    int n = 10;
    int *ptr;
    ptr = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("7 X %d = %d\n", i+1, (i+1)*7);
    }  
    
    n = 15;
    ptr = (int*) realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("7 X %d = %d\n", i+1, (i+1)*7);
    }
    return 0;
}