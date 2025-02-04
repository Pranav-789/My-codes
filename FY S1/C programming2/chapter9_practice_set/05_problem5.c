#include <stdio.h>
#include <string.h>

typedef struct complex_no
{
    int real;
    int img;
} CN;

int main()
{
    CN c1;
    c1.real = 3;
    c1.img = 6;

    printf("The complex is %d + %di", c1.real, c1.img);
    return 0;
}