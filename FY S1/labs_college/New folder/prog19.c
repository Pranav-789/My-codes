#include<stdio.h>



int binsrch(int *arr, int  *s, int *e, int key){
    int mid = (*s + *e)/2;

    if(*(arr + mid) == key){
        return mid;
    }
    *s++;
    *e++;
    binsrch(arr, s, e, key);

}

int main () {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 0, e = 9;
    int key = 10;
    int n = binsrch(arr, &s, &e, key);

    printf("The number is present at index %d", n);

    
    return 0;
}