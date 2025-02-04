#include<stdio.h>

//function prototype
int sum(int, int);


//Function definition
int sum(int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}

int main () {
    int a = 1;
    int b =2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    sum(a,b);

    int a1 = 12;
    int b1 = 23;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c);
    sum(a1,b1);

    int a2 = 32;
    int b2 = 53;

    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c);
    sum(a2,b2);

    return 0;
}