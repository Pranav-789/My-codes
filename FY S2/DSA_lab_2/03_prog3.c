#include <stdio.h>

int main() {
    int arr[8] = {8, 7, 6, 5, 4, 3, 2, 1};  // Example of descending array

    printf("Enter the elements of array (in descending order): \n");

    for (int i = 0; i < 8; i++) {
        printf("Index %d: ", i);
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the key: ");
    scanf("%d", &key);

    int flag = 0;
    int start = 0, end = 7, mid;

    // Correct loop condition
    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == key) {
            flag = 1;
            break;
        } else if (arr[mid] > key) {  // In descending order, key is less than mid, so move start
            start = mid + 1;
        } else {  // In descending order, key is greater than mid, so move end
            end = mid - 1;
        }
    }

    if (flag) {
        printf("The key is found at index: %d\n", mid);
    } else {
        printf("Key not found\n");
    }

    return 0;
}


