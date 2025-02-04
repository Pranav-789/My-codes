#include<stdio.h>

void lnsrch(int arr[], int size, int key);

void bnsrch(int arr[], int size, int key);


int main () {
    int arr[10]= {1, 2, 3, 4, 5, 7, 9, 10, 13, 16};
    lnsrch(arr, 10, 7);
    bnsrch(arr, 10, 16);
    return 0;
}

void lnsrch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            printf("key found at index %d\n", i);
            return;
        }
    }
}

void bnsrch(int arr[], int size, int key){
    int s = 0, e = size - 1;
    while (s<=e)
    {
        int mid = (s + e)/2;
        if(arr[mid] == key){
            printf("key is present at index %d\n", mid);
            return;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    printf("Key is not present in the array\n");
}