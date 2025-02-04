#include<stdio.h>

int strlen(char *str){
    int count = 0;
    int i = 0;
    while (*(str + i) != '\0')
    {
        count++;
        i++;
    }
    
    return count;
}

int main () {
    char arr[100] = "Hello World";

    printf("The length of string is %d", strlen(arr));

    return 0;
}