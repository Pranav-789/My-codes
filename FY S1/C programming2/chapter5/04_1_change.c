#include<stdio.h>

int change(int a);// misnomer(it may not mean same as it says)

int change(int a) {
    a = 77; 
    return 0;
}

int main () {
    int b=22;
    change(b); // we called change fxn defined above
    //we entered the integer 

    //you might think the value of b will change
    //change function did not get b but got the value of b ie 22
    
    printf("b is %d", b);
    return 0;
}