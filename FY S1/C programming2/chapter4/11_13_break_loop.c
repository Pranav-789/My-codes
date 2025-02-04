#include<stdio.h>

int main () {
    for (int  i = 0; i < 15; i++)
    {
        if(i==5){
           /* break */; //exit the loop now!
           continue; //skip this itteration now meaning 5 will not be executed
           // and it will continue from 6
        }
        printf("i is %d\n", i);
    }

    printf("For loop is done!");
    
    return 0;
}