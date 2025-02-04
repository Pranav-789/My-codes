#include<stdio.h>

int main () {
    char ch = 'a';

    for (int i = 0; i < 26; i++)
    {
        printf("ASCII value of %c is %d\n", ch + i, ch + i);
    }
    
    return 0;
}