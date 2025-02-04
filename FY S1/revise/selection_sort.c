#include<stdio.h>

int main () {
    int arr[10] = {11, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int arr_min;
    for (int i = 0; i < 9; i++)
    {
        arr_min = i;

        for (int j = i+1; j < 10; j++)
        {
            if (arr[arr_min] > arr[j])
            {
                arr_min = j;
            }
            
        }

        if (arr_min != i)
        {
            int temp = arr[arr_min];
            arr[arr_min] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}