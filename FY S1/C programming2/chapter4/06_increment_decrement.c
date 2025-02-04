#include<stdio.h>

int main () {
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5;//10
    printf("The value of i is %d\n", i);

    i++;//11 increment
    printf("The value of i is %d\n", i);

    ++i; //11 same same but different
    printf("The value of i is %d\n", i);

    i +=2; // i = i+2
    printf("The value of i is %d\n", i);
    return 0;
}

// i++ prints first then increment
// ++i increment first then prints