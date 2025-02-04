#include<stdio.h>

int lrget(int arr[], int size);

int main () {
    int arr[10] = {1, 2, 3, 5, 6, 10, 7, 8, 9, 4};

    int m = lrget(arr, 10);

    printf("%d is the largest element present at index %d\n", arr[m], m);
    return 0;
}

int lrget(int arr[], int size){
    int max_index = 0;
    for (int i = 1; i < size; i++)
    {
        if(arr[i] > arr[max_index]){
            max_index = i;
        }
    }

    return max_index;
}