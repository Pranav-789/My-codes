#include<stdio.h>

int main () {
    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int key;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    
    return 0;
}