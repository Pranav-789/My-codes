#include<stdio.h>

int main () {
    char arr[200]; // Declare a character array to store the input string
    int count = 0; // Initialize a variable to count the length of the string

    puts("Enter a string: ");
    gets(arr); // Take user input (Note: 'gets' is unsafe, better to use 'fgets')

    // Count the number of characters until we reach the null terminator '\0'
    while (arr[count] != '\0')
    {
        count++;
    }

    // Loop to print characters in reverse order
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    
    return 0;
}
