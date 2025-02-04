#include<stdio.h>

int main () {
    int arr[8] = {1, 3, 5, 7, 9, 2, 4, 6};

    for (int i = 1; i < 8; i++)
    {
        int temp = arr[i];
        int j;

        for (j = i-1; j >= 0; j--)
        {
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }

    for (int j = 0; j < 8; j++) {
        printf("%d\t", arr[j]);
    }
    
    return 0;
}