#include <stdio.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int)); // int = 4bytes
    printf("Size of float: %zu bytes\n", sizeof(float)); //float = 4bytes
    printf("Size of char: %zu byte\n", sizeof(char)); // char = 1byte 

    int a;
    a = 4;
    printf("Size of a: %zu bytes\n", sizeof(a));

    return 0;
}