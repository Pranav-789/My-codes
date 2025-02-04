#include<stdio.h>
#include<math.h>

int main () {
    int a = 5;
   // printf("the area of this square is %d\n", pow(a, 2));
   // pow return double type data so %d will not work
    printf("the area of this square is %.2f\n", pow(a, 2));
    return 0;
}