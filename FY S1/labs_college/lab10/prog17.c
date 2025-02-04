#include <stdio.h>

int power(int base, int n) {
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 0; 
    }
    return base * power(base, n - 1);
}

int main() {
    int base, n;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("power should be a non-negative integer\n");
    } else {
        int r = power(base, n);
        printf("%d raised to the power of %d is: %d\n", base, n, r);
    }

    return 0;
}
