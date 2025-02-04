//bubble sort
#include<stdio.h>

int main () {
    int arr[6] = {5, 4, 1, 2, 7, 6};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}