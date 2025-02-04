#include<stdio.h>

int my_strlen(char arr[]);

int main () {
    char arr[100] = "racecar";

    char palin[100];
    int n = my_strlen(arr);

    for (int i = n-1; i >= 0; i--)
    {
        palin[i] = arr[n-1 -i];
    }
    palin[n] = '\0';
    printf("%s", palin);
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == palin[i]){
            printf("Not a palindrome");
            break;
        }
    }
    
    return 0;
}

int my_strlen(char arr[]){
    int count = 0;
    while(arr[count] != '\0'){
        count++;
    }
    return count;
}