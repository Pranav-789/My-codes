#include<stdio.h>

int main () {
    char ch;
    FILE *ptr;
    int num1, num2, num3;

    ptr = fopen("integer.txt", "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);

    fclose(ptr);
    return 0;
}