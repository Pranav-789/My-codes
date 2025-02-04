#include <stdio.h>

void longest(char arr[]){
    int s = 0, i = 0, e;
    
    int max = 0;

    while(arr[i] != '\0'){
        int count = 0;
        while (arr[i] != ' ')
        {
            e = i - 1;
            while(s != e){
                count++;
                s++;
            }
        }
        if(count > max){
            max = count;
        }
        
    }
}

int main()
{
    char arr[100] = "Hello world";
    return 0;
}