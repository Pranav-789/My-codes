#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y) {
    return x + y;
}

int main() {
    int a = 1;
    int b = 2;
    
    // Function call to sum(a, b)
    int c = sum(a, b);
    
    // Print the result
    printf("The sum is %d\n", c);

    return 0;
}
