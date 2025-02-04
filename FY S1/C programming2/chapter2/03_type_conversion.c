#include<stdio.h>

int main () {
    // int a = 4;
    float a = 9.0;
    int b = 2;
    float c = 9/5;
    int d = 6.7;
    printf("The value of a/b is %f", c ); // the answer is 4 as int/int always give integer therefore use int/float mix
    printf("The value of d is %d",d); //6 as in int it gets demoted
    return 0;
}