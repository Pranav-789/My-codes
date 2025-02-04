#include <stdio.h>

int rmvdups(int arr[], int size);

int main() {
    int arr[] = {5, 3, 2, 3, 8, 5, 1, 8, 10, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int uniqueSize = rmvdups(arr, size);
    printf("Number of unique elements: %d\n", uniqueSize);

    return 0;
}

int rmvdups(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = -1;
            }
        }
    }

    int unqcnt = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            arr[unqcnt++] = arr[i];
        }
    }

    printf("Array after removing duplicates: \n");
    for (int k = 0; k < unqcnt; k++) {
        printf("%d\t", arr[k]);
    }
    printf("\n");

    return unqcnt;
}