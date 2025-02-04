
#include <stdio.h>

void countDuplicates(int arr[], int size) {
    int count[size];
    int i, j;

    // Initialize count array
    for (i = 0; i < size; i++) {
        count[i] = 0;
    }

    // Count duplicates
    for (i = 0; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                count[j]++;
                break; // No need to count the same element again
            }
        }
    }

    // Print duplicates and their counts
    printf("Element  Count\n");
    for (i = 0; i < size; i++) {
        if (count[i] > 0) {
            printf("%d        %d\n", arr[i], count[i] + 1); // +1 to include the element itself
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    countDuplicates(arr, size);

    return 0;
}
