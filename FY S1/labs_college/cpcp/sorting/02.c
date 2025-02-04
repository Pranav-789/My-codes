//Selection sort
#include<stdio.h>

int main() {
    int arr[5] = {107, 22, 34, 12, 16};

    for (int i = 0; i < 5; i++)
    {
        int arr_min = i;

        for (int j = i+1; j < 5; j++)
        {
                if (arr[j] < arr[arr_min])
                    {
                    arr_min = j;
                }
                
            
        }
        if (arr_min != i)
        {
            int temp = arr[i];
            arr[i] = arr[arr_min];
            arr[arr_min] = temp;
        }
    }
    
    
    for (int k = 0; k < 5; k++)
    {
        printf("%d\t", arr[k]);
    }
    
    return 0;
}