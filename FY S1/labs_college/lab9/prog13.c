#include <stdio.h>

int remove_duplicates(int arr[], int size);

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, size);

    int newSize = remove_duplicates(arr, size);

    printf("Array after removing duplicates: ");
    print_array(arr, newSize);
    printf("New size of the array: %d\n", newSize);

    return 0;
}

int remove_duplicates(int arr[], int size) {
    if (size == 0){
        return 0;
    }
    int newSize = 1;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[newSize - 1]) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    
    return newSize;
}