#include <stdio.h>

void print_nat(int n) {
    if (n > 0) {
        print_nat(n - 1);
        printf("%d ", n);
    }
}

int main() {
    printf("The first 50 natural numbers are:\n");
    print_nat(50);
    printf("\n");
    return 0;
}
