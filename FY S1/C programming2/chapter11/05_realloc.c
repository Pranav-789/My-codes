#include<stdio.h>

int main () {
    int n = 5;
    int *ptr;

    ptr = (int*) malloc(n* sizeof(int));
    //int arr[n] // not allowed in c
    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d", ptr[0]);

    ptr = (int*) realloc(ptr, 10 * sizeof(int)); // now you can store 10 int in memory
    

    return 0;
}