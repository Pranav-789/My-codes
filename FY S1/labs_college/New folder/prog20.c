#include<stdio.h>

int hlse(int n){
    
    if(n%2==1){
        printf("d\t", 3*n +1);
    }
}

int main () {
    int n = 13;

    hlse(13);

    return 0;
}