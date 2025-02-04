#include<stdio.h>

int main () {
    int i;
    for(int i=5; i ; i--){ // here only 'i' means the condition "is the value of i is positive?" at i = 0 this for loop will exit as 0 is not a non zero value
        printf("%d\n", i);
    }
    return 0;
}