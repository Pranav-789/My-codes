#include<stdio.h>

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5;
    int b = 6;
    swap(&a, &b);

    printf("After swaping a = %d and b = %d", a, b);
    return 0;
}