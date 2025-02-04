#include<stdio.h>

int main () {
    int n = 45;
    float m = 32.23; // can be converted to integer 

    n = (int) m; // this is called typecasting, you can change data type of any variable using this
    printf("%d \n", n) ;
    return 0;
}