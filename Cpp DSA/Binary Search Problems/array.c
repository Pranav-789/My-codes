// unique elemennts
#include<stdio.h>
#include<stdbool.h>

int main () {
    int arr[10] = {1, 1, 2, 3, 3, 3, 4, 5, 5, 6};
    
    int d_c =0;
    int newarr[10] = {0};
    
    for (int i = 0; i < 10; i++)
    {
        bool exist = false;

        for (int j = 0; j < d_c; j++)
        {
            if(newarr[j] == arr[i]){
                exist = true;
            }   
        }
        
        if (exist == false)
        {
            newarr[d_c] = arr[i];
            d_c = d_c + 1;
        }
        
    }

    for (int k = 0; k < d_c; k++)
    {
        printf(" %d ", newarr[k]);
    }
    
    
    return 0;
}