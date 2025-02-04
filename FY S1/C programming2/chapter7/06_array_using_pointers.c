#include<stdio.h>

int main () {
    int marks[] = {23, 34, 45, 56};

    int *ptr = &marks[0];

   /* int *ptr = &marks[0];
   int *ptr = marks; // this statement point to the first element of array
    same as int *ptr = &marks[0];*/
    for (int i = 0; i < 4; i++)
    {
      //  printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
    // if we pass an address of an array to functioin it can cahnge the value store in the array
    
    return 0;
}