#include<stdio.h>

int decimal(int num){
    if(num==0){
        return 0;
    }
    return (num%2) + 10*decimal(num/2);
}

int main(){
    int num = 5;
    int n = decimal(num);

    printf("%d", n);
    return 0;
}