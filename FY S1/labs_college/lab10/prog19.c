#include <stdio.h>

void hailstone(int n) {
    printf("%d ", n);
    if (n == 1) {
        return;

    } else if (n % 2 == 0) {
        hailstone(n / 2); 
    } else {
        hailstone(3 * n + 1);
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Hailstone sequence for %d is: ", number);
    hailstone(number);
    printf("\n");

    return 0;
}