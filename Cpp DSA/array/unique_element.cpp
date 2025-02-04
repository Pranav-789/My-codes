#include<iostream>
using namespace std;


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int unique_ele(int arr[], int size) {
    bubbleSort(arr, size); // Sort the array

    for (int i = 0; i < size; i++) {
        // Check if current element is unique
        if ((i == 0 || arr[i] != arr[i - 1]) && (i == size - 1 || arr[i] != arr[i + 1])) {
            return arr[i]; // Return the unique element
        }
    }

    return -1; // Return -1 if no unique element is found
}

int main() {
    int sample_arr[7] = {2, 3, 1, 6, 3, 6, 2};
    cout << unique_ele(sample_arr, 7);
}