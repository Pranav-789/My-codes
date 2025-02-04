#include<stdio.h>

int natprnt(int num){
    if (num == 1)
    {
        printf("1");
        return 0;
    }
    printf("%d\t", num);
    natprnt(num - 1);
    return -1;
}

int main () {
    natprnt(10);
    return 0;
}