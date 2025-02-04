#include<stdio.h>

int main(){
    int arr[8] = {0};

    printf("Enter the elements of array: \n");

    for (int i = 0; i < 8; i++)
    {
        printf("Index %d: ", i);
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter te key: ");
    scanf("%d", &key);

    int flag = 0;

    int j;

    for (j = 0; j < 8; j++)
    {
        if(key == arr[j]){
            flag++;
            break;
        }
    }

    if(flag){
        printf("The key is found at index: %d\n", j);
    }    
    else{
        printf("Key not found\n");
    }
    
    return 0;
}