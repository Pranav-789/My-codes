//insertion sort in dsc order

#include<stdio.h>

int main () {
    int sarr[10] = {12, 34, 26, 28, 74, 86, 16, 95, 39, 46};

    for (int i = 1; i < 10; i++)
    {
        int temp = sarr[i];
        int j;

        for ( j = i-1; j >=0; j--)
        {
            if (sarr[j] < temp)
            {
                sarr[j+1] = sarr[j];
            }
            else
            {
                break;
            }
        }

        sarr[j+1]  = temp;
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", sarr[i]);
    }
    
    
    return 0;
}