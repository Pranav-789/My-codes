#include<stdio.h>

int cmp(int *a, int *b){
    if(*a > *b){
        return *a;
    }
    else{
        return *b;
    }
}

int main () {
    int a, b;
    printf("Enter both numbers: ");
    scanf("%d %d", &a, &b);

    int n = cmp (&a, &b);
    printf("%d is the gretest\n", n);
    return 0;
}