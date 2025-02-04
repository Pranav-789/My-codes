#include<stdio.h>

int main(){
    int arr[3][3];

    printf("Enter the elements of array: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int arr2[3][3];

    printf("Enter the elements of array: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    int result_matrix[3][3] = {0};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result_matrix[i][j] += arr[i][k] * arr2[k][j];
            }
            
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", result_matrix[i][j]);
        }
        printf("\n");
    }



    return 0;
}