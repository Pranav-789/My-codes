#include<stdio.h>

int strlength(char arr[]);

int main () {
    char arr[100];
    printf("Enter the string: ");
    gets(arr);
    int n = strlength(arr);
    printf("The length of string is %d\n", n);
    return 0;
}

int strlength(char arr[]){
    int count = 0;
    while (arr[count] != '\0')
    {
        count++;
    }
    return count;
}