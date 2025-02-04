#include<stdio.h>

int natsum(int num);

int main () {
    int in;
    printf("Enter the num: ");
    scanf("%d", &in);
    int n = natsum(in);
    printf("%d is the sum of first given natural numbers\n", n);
    return 0;
}

int natsum(int num){
    if(num == 1){
        return 1;
    }
    return num + natsum(num -1);
}