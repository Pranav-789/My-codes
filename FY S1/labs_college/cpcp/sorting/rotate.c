#include<stdio.h>

int main () {
    int arr[10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char dir;
    puts("Enter the direction of rotation(l/r): ");
    scanf("%c", &dir);

    int pos;
    puts("Enter the number of rotation: ");
    scanf("%d", &pos);

    switch (dir)
    {
    case 'r':
        for (int i = 0; i < pos; i++)
        {
            int temp = arr[9];
            for (int j = 8; j >= 0; j--)
            {
                arr[j+1] = arr[j];
            }
            arr[0] = temp;            
        }
        break;
    case 'l':
        for (int i = 0; i < pos; i++)
        {
            int temp = arr[0];
            for (int j = 1; j < 10; j++)
            {
                arr[j-1] = arr[j];
            }
            arr[9] = temp;            
        }
        break;
        
    default:
        break;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}