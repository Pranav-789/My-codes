#include<stdio.h>

int linsrch(float *arr, float key){
    for(int i = 0; i < 10; i++){
        if(*(arr + i) == key){
            return i;
        }
    }
    return -1;
}

int main () {
    float arr[10] = {1, 2, 45, 62, 78, 98, 5, 23, 7, 88};
    float key = 98;

    int n = linsrch(arr, key);
    printf("The key is present at index %d\n", n);
    return 0;
}