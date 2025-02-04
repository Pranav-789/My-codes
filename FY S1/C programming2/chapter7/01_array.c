#include<stdio.h>

int main () {
    int marks[90]; // you can store 90 integers in marks
    // with the help of array you can assign multiple values to a single varaiable

    marks[0] = 45;
    marks[1] = 95;
    // we can go from marks[0] to marks[89], not marks[90]
    // as marks[90] means reserve space for 90 values
    printf("Marks 0 and Marks 1 is %d %d", marks[0], marks[1]);
    
    return 0;
}