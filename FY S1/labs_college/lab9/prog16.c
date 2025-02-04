#include<stdio.h>
#include<string.h>


void revword(char arr[]);

int main () {
    char arr[20] = "Hello World";
    revword(arr);
    return 0;
}

void revword(char arr[]){
    int i = 0, s = 0, e = 0;
    while(arr[i] != '\0'){
        if (arr[i] == ' ')
        {
            e = i - 1;
            while(s < e){
                char temp = arr[s];
                arr[s] = arr[e];
                arr[e] = temp;
                s++;
                e--;
            }
            s = i + 1;
        }
        i++; 
    }
    e = i-1;
    while(s < e){
        char temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

    printf("%s", arr);
}