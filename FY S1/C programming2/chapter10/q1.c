#include<stdio.h>

int main () {
    FILE *ptr;
    ptr = fopen("new.txt", "r");

    for (int i = 0; i < 3; i++)
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("%d\t", num);
    }

    fclose(ptr);
    
    return 0;
}