#include<stdio.h>

int min(int *arr, int size){
    int min_idx = 0;
    for(int i = 1; i < size; i++){
        if (*(arr + min_idx)>*(arr + i))
        {
            min_idx = i;
        }
    }
    return min_idx;
}

int main () {
    int arr[8] = {2, 5, 1, 4, 9, 7, 3, 6};
    int n = min(arr, 8);

    printf("%d is the min number in array at index %d\n", arr[n], n);
    return 0;
}