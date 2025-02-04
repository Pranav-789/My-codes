//Insertion sort
#include <stdio.h>

int main() {
    int arr[] = {1, 21, 34, 16, 18, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    for (int j = 0; j < n; j++) {
        printf("%d\t", arr[j]);
    }

    return 0;
}
