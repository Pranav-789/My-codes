// #include<stdio.h>

// int main () {
//     FILE *ptr;
//     ptr = fopen("harry.txt", "w"); //for fgrtc use "r"
//     char c = fgetc(ptr);
//     printf("%c", c); //will give first character from .txt

//     fputc('c', ptr);
//     return 0;
// }

#include<stdio.h>

int main () {
    FILE *ptr;
    ptr = fopen("new.txt", "w");

    // char c = fgetc(ptr);
    // printf("%c", c);
    // char d = fgetc(ptr);
    // printf("%c", d);
    // char e = fgetc(ptr);
    // printf("%c", e);

    fputc('7', ptr);
    return 0;
}