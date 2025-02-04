#include<stdio.h>

int main () {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    // in switch case if case x is true the witch case x all cases after x will also be executed
    // but to avoid this we use break statement

    switch(a){
        case1:
        printf("you entered 1\n");
        break;
        case2:
        printf("you entered 2\n");
        break;
        case3:
        printf("you entered 3\n");
        break;
        case4:
        printf("you entered 4\n");
        break;
        default:
        printf("Noting matched");
    }
    return 0;
}