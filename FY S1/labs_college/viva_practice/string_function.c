// Write programs in C to implement the following string library functions: Note: you cannot use
// string.h.
// a. strcat
// b. strcpy
// c. strlen
// d. strcmp

#include<stdio.h>

int strlen(char arr[]){
    int count = 0;
    while(arr[count]!='\0'){
        count++;
    }

    return count;
}

void my_strcat(char arr1[], char arr2[]){
    int i = 0, j = 0;
    while (arr1[i] != '\0')
    {
        i++;
    }

    while (arr2[j] != '\0')
    {
        arr1[i] = arr2[j];
        i++;
        j++;
    }
    arr1[i] = '\0';
}

void my_strcpy(char arr1[], char arr2[]){
    int i = 0;
    while(arr1[i] != '\0'){
        arr2[i] = arr1[i]; // Corrected the typo here
        i++;
    }
    arr2[i] = '\0'; // Null-terminate the destination string
}

int my_strcmp(char arr1[], char arr2[]){
    int i = 0;
    while (arr1[i] != '\0' && arr2[i])
    {
        if(arr1[i] != arr2[i]){
            return arr1[i] - arr2[i];
        }
        i++;
    }
    return arr1[i] - arr2[i];
}

int main () {
    char arr1[100] = "Hello ";
    char arr2[100] = "World";
    char arr3[100];

    printf("The length of arr1 is %d\n", strlen(arr1));
    
    my_strcat(arr1, arr2);
    printf("Concatenated string: %s\n", arr1);

    my_strcpy(arr1, arr3);
    printf("Copied string: %s\n", arr3);

    int result1 = my_strcmp(arr3, arr1);
    printf("result of comparing arr 3 and arr1 is %d\n", result1);
    return 0;
}

