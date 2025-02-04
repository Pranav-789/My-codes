#include<stdio.h>

void wordreverse(char arr[]){
    int s = 0, i = 0, e;
    
    while (arr[i] != '\0')
    {
        if(arr[i] == ' ' || arr[i] == '\0'){
            e = i-1;
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
    e = i - 1;
    
    while(s < e){
        char temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        s++;
        e--;
    }
    
    puts(arr);
}

int main () {
    char arr[100] = "Hello iiit pune";
    wordreverse(arr);
    return 0;
}