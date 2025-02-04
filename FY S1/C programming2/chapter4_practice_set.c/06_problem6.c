/*
#include<stdio.h>

int main () {
    int i=1 ;
    int sum=0;

    for ( i = 1; i <=10 ; i++)
    {
        sum += i;
    }
    printf("The sum of first 10 natural number is %d\n", sum);
    
    return 0;
} */

#include<stdio.h>

int main () {
    // sum of first 10 natural numbers using while loop
    int i =1;
    int sum = 0;
    do{
        sum += i;
        i++;
    } while (i<=10);
    {
        printf("The sum of first 10 natural number is %d", sum);
    }
    
    return 0;
}