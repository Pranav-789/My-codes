#include<stdio.h>

int main () {
    int product = 1;
    int i;
    int n=4;


    for (i= 1; i <= n; i++)
    {
        product *= i;
    }

    printf("The factorial %d", product );
    
    return 0;
}