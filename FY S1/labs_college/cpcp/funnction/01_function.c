// #include<stdio.h>

// int factorial(int n){
    
//     if(n>0){
//         return n + summation(n-1);
//     }
//     else{
//         return 0;
//     }
// }

// int main () {
//     printf("%d is summation of %d", summation(8), 8);
//     return 0;
// }

#include<stdio.h>

int fact(int n){
    if(n>1){
        return (n * fact(n-1));
    }
}

int main () {
    printf("%d", fact(6));
    return 0;
}