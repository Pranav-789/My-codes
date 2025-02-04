#include<stdio.h>

int main () {
    int a=4;
    printf("%d %d %d \n", a, ++a, a++); // 6 6 4 intead of 4, 5,5
    // this is because evaluation order is right to left
return 0;
}