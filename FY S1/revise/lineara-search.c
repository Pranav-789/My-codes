#include<stdio.h>

int main () {
    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int key;

    printf("Enter the key: ");
    scanf("%d", &key);

    int exist = 0;

    int i;

    for (i = 0; i < 10; i++)
    {
        if(key == arr[i]){
            exist++;
            break;
        }
    }
    
    if (exist == 1)
    {
        printf("%d is at index %d", key, i);
    }
    
    return 0;
}