//to find the volume of cylinder
#include<stdio.h>

int main () {
    printf("To convert the celsius into farenheit");

    float celsius;

    printf("\nEnter celsius");
    scanf("%f", &celsius);

    printf("Temperature %f deg celsius is %f deg farenheit",celsius, 1.8*celsius+32 );
    return 0;
}