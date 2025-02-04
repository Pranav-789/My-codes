#include<stdio.h>

int main () {
    int a = 4;
    int b = 3;

    int c = a + b;

   /* int a + b = c */ // as = is used to assign value in c, not to take value

    printf("The value of is a %d and the value of is b %d has the sum %d", a, b, c);
    // modulus operator is used to get the remainder of the division
    // it is used to know if it is divisible by number or not (used in if else)
    // modulus cannot be  used on float
    printf("\nthe remainder when  a is divided by is %d", a%b);

    return 0;
}