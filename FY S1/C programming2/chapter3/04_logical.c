//The "&&" operator returns true (1) if both of its operands are true, otherwise, it returns false (0)
// 1 = true 0 = false

#include<stdio.h>

int main () {
   int a=1, b=1;
    printf("\nThe value of a and b is %d", a&&b);
    printf("\nThe value of a and b is %d", a||b);

    // The "||" operator returns true (1) if at least one of its operands is true.
    // If both operands are false, it returns false (0).

    int c=0, d=1;
    printf("\nThe value of c and d is %d", c||d);
    printf("\nThe value of c and d is %d", c&&d);
    
    printf("\nThe value of not(a) is %d", !a); // not operators does t-->f and f-->t

     if(a && b){
        printf("\nboth are true");
        }
   
   // if there was no logical operator
   // both are same are as writing

   if(a){
    if(b){
        printf("\nboth are true");
    }
   }

    return 0;
}