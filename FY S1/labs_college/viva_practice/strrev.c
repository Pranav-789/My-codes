#include<stdio.h>

int strlen(char arr[]) {
    int count = 0;
    while (arr[count] != '\0') {
        count++;
    }
    return count;
}

int main () {
    char arr[100] = "IIIT PUNE";
    int n = strlen(arr); // Calculate the length of the string

    int s = 0, e = n - 1; // Initialize start (s) and end (e) indices
    while (s < e) { // Continue swapping characters until the middle of the string is reached
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        s++;
        e--;
    }

    printf("%s", arr); // Print the reversed string

    return 0;
}
