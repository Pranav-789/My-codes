#include<stdio.h>
#include<string.h>

int un(char arr1[], char arr2[]){
    int count[256] = {0};
    for (int i = 0; i < strlen(arr1); i++)
    {
        count[(int)arr1[i]]++;
    }
    for (int i = 0; arr2[i] != '\0'; i++) {
        count[(int)arr2[i]]--;
        if (count[(int)arr2[i]] < 0) {
            return 0;
        }
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    char arr1[100];
    char arr2[100];
    printf("Enter string1: ");
    gets(arr1);
    printf("Enter string2: ");
    gets(arr2);

    if(un(arr1, arr2)){
        printf("The strings are anagrams\n");
    }
    else{
        printf("The strings are not anagrams\n");
    }
    return 0;
}