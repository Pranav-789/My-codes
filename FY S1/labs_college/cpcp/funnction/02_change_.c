#include<stdio.h>

int sum(int* a, int* b){
    *a = *a * 2;
    return *a + *b;
}

int main () {
    int a = 5;
    int b = 6;

    printf("%d", sum(&a, &b));
    return 0;
}