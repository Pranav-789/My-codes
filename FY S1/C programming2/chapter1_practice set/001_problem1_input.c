//write a program give the area of a rectangle
#include<stdio.h>

int main () {
    printf("To find the area of rectangle");
    int lenght;
    int breadth;
    printf("\nEnter lenght\t");
    scanf("%d", &lenght);
    printf("\nEnter breadth\t");
    scanf("%d", &breadth);

    printf("The area of the rectangle is %d", lenght*breadth);
    return 0;
}

