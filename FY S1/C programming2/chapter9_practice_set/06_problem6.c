#include<stdio.h>
#include<string.h>

typedef struct c{
    int real;
    int img;
} Complex;

int main () {
    int i;
    Complex c[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Please enter real");
        scanf("%d", &c[i].real);

        printf("Please enter imaginary");
        scanf("%d", &c[i].img);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The complex number c[%d] is %d + %di\n", i+1, c[i].real, c[i].img);
    }
    
    
    return 0;
}