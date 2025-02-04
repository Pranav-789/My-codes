#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[10] = {1, 1, 2, 3, 3, 3, 4, 5, 5, 6};
    int newarr[10];
    bool seen[10] = {false}; // Array to track seen elements
    int d_c = 0;

    for (int i = 0; i < 10; i++) {
        int value = arr[i];

        // Check if the value has already been added
        if (!seen[value]) {
            seen[value] = true; // Mark the value as seen
            newarr[d_c++] = value; // Add unique value to newarr
        }
    }

    // Print unique elements
    for (int k = 0; k < d_c; k++) {
        printf("%d ", newarr[k]);
    }
    
    return 0;
}
