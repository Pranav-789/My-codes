#include<stdio.h>

int main () {
    char st[4]; // we enter 3 but 4th is for null char
    scanf("%s", st); // here you do not use & as string is a address itself

    printf("%s", st);
    return 0;
}