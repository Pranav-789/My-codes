#include<stdio.h>

int main () {
    int age;

    scanf("%d", &age);
    
    if(age>60){
        printf("You can drive and you are a senoir citizen");
    }
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("you cannot drive");
    }
    return 0;
}