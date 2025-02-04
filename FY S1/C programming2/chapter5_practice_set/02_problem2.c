// to convert celc to fahrenheit
#include<stdio.h>

float fahrenhite(float);

float fahrenhite(float a){
    return (1.8 * a + 32);
}

int main () {
    int a;
    printf("Enter temp in celsius: ");
    scanf("%d", &a);

    printf("Temp in degF is %.2f\n", fahrenhite(a));
return 0;
}