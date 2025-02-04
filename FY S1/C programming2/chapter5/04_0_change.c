#include<stdio.h>

int sum(int, int);

int sum(int x, int y) {
    printf("The sum is %d\n", x+y);
    return x+y;
}

int main () {

    int c = sum(1,2);
    printf("%d\n", c);

    // you cannot change c as you have defined c as sum of 1 and 2
    return 0;
}