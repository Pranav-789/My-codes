#include<stdio.h>

int main() {
    int arr[8] = {5, 7, 3, 2, 4, 6, 8, 1};

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }

    for (int k = 0; k < 8; k++)
    {
        printf("%d\t", arr[k]);
    }
    
    
}