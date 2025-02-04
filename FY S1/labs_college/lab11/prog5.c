#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    int n = 0;
    float sum = 0, mean, stddev = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float *nums = (float *)malloc(n * sizeof(float));

    if (nums == NULL) {
        printf("Memory allocation failed.\n");
       
    }

    printf("Enter the numbers: \n");
    for (int i = 0; i < n; i++){
        scanf("%f", &nums[i]);
        sum = sum + nums[i];
    }

    mean = sum / n;

    for (int i = 0; i < n; i++)
    {
        stddev = stddev + pow(nums[i] - mean, 2);
    }
    stddev = sqrt(stddev / n);
    

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
    printf("Standard Deviation = %.2f\n", stddev);

    free(nums);
    
    return 0;
}