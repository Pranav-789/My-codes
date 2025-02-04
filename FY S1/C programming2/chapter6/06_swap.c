#include<stdio.h>

/*
void swap(int, int);

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}
*/

void swap(int *, int *);

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main () {
    int a = 4, b = 3;
    //swap(a,b);

    swap(&a, &b);
    
    printf("The value of a is %d and the value of b is %d\n", a,b);
    return 0;
}