#include<stdio.h>

int main () {
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", ptr);
    printf("The address of a is %u\n", &a);
    ptr++;
    printf("The value of ptr is %u\n", ptr);// inc by 4 as int takes 4 bytes
    // if you done this for char instead of int the increaent would be by 1
    
    return 0;
}