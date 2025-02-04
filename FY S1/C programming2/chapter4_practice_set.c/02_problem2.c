#include<stdio.h>

int main () {
    // print the table of n in reverse order
    int n = 10;

    int i;

    for ( i = 10; i; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    

    return 0;
}