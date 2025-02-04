#include<stdio.h>

int strlength(char *arr){
    int count = 0;
    while(*(arr + count) != '\0'){
        count++;
    }
    return count;
}

int main () {
    char arr[100];
    printf("Enter the string: ");
    scanf("%s", arr);

    int n = strlength(arr);

    printf("The length of the string is %d\n", n);
    return 0;
}