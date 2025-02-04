#include<stdio.h>

int main () {
    // to calculate the income tax

    float income, tax=0;
    printf("Enter your annual income: \n");
    scanf("%f", &income);

if(income<250000){
    tax = 0;
}

if(income>250000 && income<=500000){
    tax = 0.05 * (income - 250000);
}

if(income>500000 && income<=1000000){
    tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
}

if(income>1000000 && income<=2000000){
    tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
}

printf("The total tax you need to pay is %.2f", tax);

    return 0;
}