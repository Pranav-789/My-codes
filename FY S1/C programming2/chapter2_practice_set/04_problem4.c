#include<stdio.h>

int main () {
    int x = 2, y = 3, z = 3, k = 1;
    int e =3*x/y - z+k; // first * then / then - then + // answer is 0
    printf("The value of e is %d", e);
    return 0;
}