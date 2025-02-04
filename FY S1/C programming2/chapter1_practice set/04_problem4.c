// to find simple interest of the given set of  values
#include<stdio.h>

int main () {
    printf("To find the annual simple interest");
    
    float p;
    printf("\n Enter principle amt in lakhs\t");
    scanf("%f", &p);

    printf("\nEnter rate of interest\t");  
    float r;
    scanf("%f", &r);

    printf("\nTime period\t");
    int t;
    scanf("%d", &t);

    printf("The value of interest is %f", (p*r*t/100));

    return 0;
}