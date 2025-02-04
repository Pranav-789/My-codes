#include<stdio.h>

int main(){
    float array[4][4];  // Declare a 4x4 matrix
    float boundary_sum = 0;

    // Input elements of the 2D array
    printf("Enter the elements of the 4x4 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%f", &array[i][j]);  // Use %f for reading float values
        }
    }
    for (int j = 0; j < 4; j++) {
        boundary_sum += array[0][j];  // First row
        boundary_sum += array[3][j];  // Last row
    }

    // First and last columns (excluding corners already added)
    for (int i = 1; i < 3; i++) {  // Avoid double-counting corners
        boundary_sum += array[i][0];  // First column
        boundary_sum += array[i][3];  // Last column
    }

    // Print the sum of the boundary elements
    printf("Sum of all boundary elements: %.2f\n", boundary_sum);  // Print sum with 2 decimal places

    return 0;
}
