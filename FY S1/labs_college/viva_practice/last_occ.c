#include<stdio.h>

int last_Occ(char arr[], char ch){
    int i = 0, last_index = -1;
    while(arr[i] != '\0'){
        if(arr[i] == ch){
            last_index = i;
        }
        i++;
    }
    return last_index;
}

int main () {
    char str[100] = "Hello iiitpune";
    int n = last_Occ(str, 'i');
    printf("last occurence of %c is at index %d\n", 'i', n);
    return 0;
}