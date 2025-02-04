#include<stdio.h>

int main () {
    int i =0 ;
    while(i<10) {
        // or u can use 2<10 which is always true
        printf("The value of i is %d\n", i);
        //as we are not increasing value
        // value of i =0 and will repeat infinitely 
    }

    return 0;
}