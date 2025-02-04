#include<stdio.h>

int main () {
    // what will 3.0/8-2 return
    // as we are putting it in float therefore by precedence 3.0/8 wil be 0.375 and -2 will give -1.625
    float a = 3.0/8-2;
    printf("%f", a); // answer in float
    return 0;
}