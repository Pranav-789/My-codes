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

    int start = 0, end = 7, mid;

    while(start < end){
        mid = (start + end)/2;
        if(arr[mid] == key){
            flag++;
            break;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    if(flag){
        printf("The key is found at index: %d\n", mid);
    }    
    else{
        printf("Key not found\n");
    }
    
    return 0;
}