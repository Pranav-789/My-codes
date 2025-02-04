#include<stdio.h>

int main () {
    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int key;

    printf("Enter the key: ");
    scanf("%d", &key);

    int exist = 0;

    int i;
    int start = 0, end = 9, mid;

    for (int i = 0; i < 10; i++)
    {
        mid = (start + end)/ 2;
        if (key==arr[mid])
        {
            exist++;
            break;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }   
    }

    if (exist == 1)
    {
        printf("%d is at index %d", key, mid);
    }
    
    return 0;
}