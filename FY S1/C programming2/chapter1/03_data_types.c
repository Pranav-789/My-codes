#include<stdio.h>

int main () {
   // int a;
    //a = 1;

    int a = 1; // 4byte

    // float b = 1.4; or

    float b; // 4byte
    b = 1.4;

    // char c = 'a' ;
    char c; // char takes 1 byte
    c = 'a'; // characters are stored in single quotes

    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);

    return 0;
}