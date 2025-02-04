//if else
#include<stdio.h>

int main () {
    int age ;

    printf("Enter your age\t");

    scanf("%d", &age);

    if (age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    };

    if (age%5==0){
        //in c we use single = to assign value and to check equality we have to put = two times
        //== is a relational operators
        printf("We are inside if\n");
        printf("Your age is divisible by 5\n");
    };

    //only 'if' wont work else is also req else it wont be executed if the condition is not met in "if"

    return 0;
}