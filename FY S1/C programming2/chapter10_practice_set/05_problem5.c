#include<stdio.h>

int main () {
    FILE *ptr;
    int num;
    ptr = fopen("integer.txt", "r");
    fscanf(ptr, "%d", &num);

    fclose(ptr);

    ptr = fopen("integer.txt", "w");
    fprintf(ptr, "%d", 2*num);
    fclose(ptr);
    return 0;
}