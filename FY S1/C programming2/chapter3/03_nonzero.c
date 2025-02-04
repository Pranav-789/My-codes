#include<stdio.h>

int main () {
    if(1) {
        printf("This if is executed\n");
    }
    if(1234) {
        printf("This if is executed\n");
    }
     if(2.34) {
        printf("This if is executed\n");
    }
    if('c') {
      
       printf("This if is executed\n");
    }
    if(0) {
       printf("I am zero i am not executed\n");
    }

    return 0;
}
