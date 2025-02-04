#include<stdio.h>

int power(int n, int num){
    if(n == 0){
        return 1;
    }
    return num * power(n-1, num);
}
int main () {
    int num = 2;
    int n = 4;

    int c = power(n, num);
    printf("%d", c);
    return 0;
}