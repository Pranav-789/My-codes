#include<stdio.h>

int main () {
    int arr[10] = {11, 3, 5, 7, 9, 2, 4, 6, 8, 10};

    for (int i = 1; i < 10; i++)
    {
        int temp = arr[i];

        int j;

        for (j = i-1; j >=0; j--)
        {
            if (temp < arr[j])
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
            
        }

        arr[j+1] = temp;
          
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}