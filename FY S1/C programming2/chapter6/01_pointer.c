#include<stdio.h>

int main() {
    // pointer is variable which stores the address of another variable
    int i = 72;
    int* j = &i; // j is pointing to i
    int k =67;
    printf("The address of 'i' is %p\n", &i);
    printf("The address of 'i' is %u\n", &i); // for address in all integers
    printf("The address of 'i' is %p\n", j);
    printf("The address of 'k' is %p\n", &k);
    printf("The address of 'j' is %p\n", &j);
    printf("The value at address j is %d\n", *j);
    printf("The value at address j is %d\n", *(&i));
    printf("The value at j is %p\n", *(&j));
    // '*' mean the value at the given adddress
    return 0;
}