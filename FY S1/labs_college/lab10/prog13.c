#include <stdio.h>

int sum_nat(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sum_nat(n - 1);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = sum_nat(n);
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
