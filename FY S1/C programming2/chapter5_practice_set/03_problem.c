#include<stdio.h>


float force(float);

float force(float m){
    return (m * (9.8));
}

int main () {
    
    char choice;

    do
    {
        int m;
        printf("Enter mass of body: ");
        scanf("%d", &m);

        printf("The G force on the body is %.2f\n", force(m));

        printf("Do you what G force other masses exp? (y/n): ");
        scanf(" %c", &choice);

    } while (choice=='Y' || choice=='y');

    printf("Signing off, Sayonara!");
    
return 0;
}