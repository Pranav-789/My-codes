#include<stdio.h>

void tenx(int*);

void tenx(int* x){
    *x = *x * 10;
}

int main () {
    int x = 45;
    printf("The value of x is %d\n", x);
    tenx(&x);
    printf("The value of x is %d\n", x);
    return 0;
}