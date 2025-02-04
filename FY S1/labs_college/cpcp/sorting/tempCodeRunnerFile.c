#include <stdio.h>

int main()
{
    int arr[8] = {5, 7, 3, 2, 4, 6, 8, 1};

    int arr_min = 0;

    for (int i = 0; i < 8; i++)
    {
        int j;

        for (j = i + 1; j < 7; j++)
        {
            if (arr[arr_min] > arr[j])
            {
                arr_min = j;
            }
        }

        if (i != arr_min)
        {
            int temp = arr[arr_min];
            arr[arr_min] = arr[i];
            arr[i] = temp;
        }
    }
    for (int k = 0; k < 8; k++)
    {
        printf("%d\t", arr[k]);
    }

    return 0;
}