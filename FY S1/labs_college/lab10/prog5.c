#include<stdio.h>

void array_print(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("Element at index %d: Value = %d, Address = %p\n", i, *(arr + i), (arr + i));
    }
}

int main () {
    int nums[15];
    int *ptr = nums;

    printf("Enter 15 integrs: \n");
    for (int i = 0; i < 15; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    array_print(nums, 15);
    
    return 0;
}