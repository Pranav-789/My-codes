#include<stdio.h>

int sum(int *, int *);

int sum(int* a, int* b){
    *a = 6;
    return *a + *b;
}

int main () {
    int x = 1, y = 6;
    /*
    int result=sum(&x, &y);
    printf("the value of x is %d\n", x);
    */
    printf("the value of x is %d\n", x);
    printf("The sum of 1 and 6 is %d\n", sum(&x,&y));
    printf("the value of x is %d\n", x);
    // the value of x will only change after the function is used
    

    return 0;
}