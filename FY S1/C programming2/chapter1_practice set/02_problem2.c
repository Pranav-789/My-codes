//to find the volume of cylinder
#include<stdio.h>

int main () {
    char choice;

    do
    {
    printf("To find the volume of cylinder");

    int radius , height;

    printf("\nEnter Radius\t");
    scanf("%d", &radius);

    printf("\nEnter height\t");
    scanf("%d", &height);

    float result = (radius*radius*height*3.14);

    printf("The volume of the cylinder is %.2f\n", result);

    printf("If you want to continue press 'y': ");
    scanf(" %c", &choice);

    } while (choice=='y'||choice=='Y');

    printf("See you again, Bye-bye!");
    return 0;
}