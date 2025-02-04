#include<stdio.h>

int main () {
    int a = 10;
    if (a = 11)  //there is no need of curly bracket if there is only one line
    printf("I am 11");
    else
    printf("I am not 11");
    return 0;
}
//the answer is "I a 11"
// in if there is a single = which is used for assignment 
// therefore we have assigned a as 11 
// hence the answer follow if statement
// for correction use if(a == 11)