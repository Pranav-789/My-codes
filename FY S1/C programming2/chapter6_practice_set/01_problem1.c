#include<stdio.h>

int main () {
    int a = 6;
    int* j = &a;

    printf("The value of a is %d\n", a);
    printf("The address of a is %p\n", j);
    printf("The value of j is %d\n", j);
    printf("The value of a is %d\n", *j);
    return 0;
}