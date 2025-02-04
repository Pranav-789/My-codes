#include<stdio.h>

void bblesrt(int *arr, int size){
    for(int i = 0; i < size-1; i++){
        for (int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main () {
    int arr[10] = {1, 2, 45, 62, 78, 98, 5, 23, 7, 88};

    bblesrt(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}