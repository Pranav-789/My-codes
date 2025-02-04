#include<stdio.h>
#include<string.h>

void longest(char arr[]);

int main () {
    char arr[100];
    printf("Enter the string: ");
    fgets(arr, sizeof(arr), stdin);
    longest(arr);

    return 0;
}

void longest(char arr[]){
    int max = 0;
    int i = 0;
    int s = 0;
    int lngst = 0;
    char marr[100];
    while(arr[i] != '\0'){
        if(arr[i] == ' '){
            int e = i - 1;
            if((e - s + 1) > max){
                max = (e- s+1);
                lngst = s;
            }
            s = i + 1;
        }
        i++;
    }
    int e = i - 1;
    if((e - s + 1) > max){
        max = (e - s + 1);
        lngst = s;
    }
    int j;
    for (j = 0; j < max; j++)
    {
        marr[j] = arr[lngst + j];
    }
    marr[j] = '\0';
    
    printf("%s is longest substring\n", marr);
}