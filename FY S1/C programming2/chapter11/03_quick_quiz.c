#include<stdio.h>
#include<stdlib.h>

int main () {

    float n = 5;
    float *ptr;
    ptr = (float *) calloc(n, sizeof(float)); // allots 5 float mem


    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", ptr[i]);
    }

    return 0;
}