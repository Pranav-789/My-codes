#include <stdio.h>

int linear_search(float *arr, int size, float key) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    float arr[10];
    float key;
    int result;

    printf("Enter 10 float values:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter float value %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    printf("Enter the float value to search: ");
    scanf("%f", &key);

    result = linear_search(arr, 10, key);

    if (result != -1) {
        printf("Element %.2f found at index %d.\n", key, result);
    } else {
        printf("Element %.2f not found in the array.\n", key);
    }

    return 0;
}
