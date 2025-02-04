#include<stdio.h>
int strlen(char arr[]){
    int count = 0;
    while(arr[count]!='\0'){
        count++;
    }

    return count;
}
int main () {
    char arr[100] = "Hello World";

    for (int i = strlen(arr) -1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    
    return 0;
}