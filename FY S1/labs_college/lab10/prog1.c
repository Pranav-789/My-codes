#include<stdio.h>

int add(int *num1, int* num2){
    return *num1 + *num2;
}

int main () {
    int a, b;
    printf("Enter both numbers: ");
    scanf("%d %d", &a, &b);

    int sum = add(&a, &b);

    printf("The sum of a and b is %d\n", sum);

    return 0;
}

// Question 2:
// #include<stdio.h>

// void swap(int *num1, int* num2){
//     int temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;
// }
// int main () {
//     int a, b;
//     printf("Enter both numbers: ");
//     scanf("%d %d", &a, &b);
//     printf("before swapping a = %d, and b = %d\n", a, b);

//     swap(&a, &b);

//     printf("After swapping a = %d, and b = %d\n", a, b);

//     return 0;
// }

// Question 3:
// #include<stdio.h>

// void factorial(int *n, int *result){
//     *result = 1;
//     for(int i = 1; i <= *n; i++){
//         *result = *result * i;
//     }
// }

// int main () {
//     int n, fact;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     factorial(&n, &fact);

//     printf("The factorial of %d is %d\n", n, fact);
//     return 0;
// }

// Question 4:
// #include<stdio.h>

// int cmp(int *a, int *b){
//     if(*a > *b){
//         return *a;
//     }
//     else{
//         return *b;
//     }
// }

// int main () {
//     int a, b;
//     printf("Enter both numbers: ");
//     scanf("%d %d", &a, &b);

//     int n = cmp (&a, &b);
//     printf("%d is the gretest\n", n);
//     return 0;
// }

// Question 5:
// #include<stdio.h>

// void array_print(int *arr, int size){
//     for(int i = 0; i < size; i++){
//         printf("Element at index %d: Value = %d, Address = %p\n", i, *(arr + i), (arr + i));
//     }
// }

// int main () {
//     int nums[15];
//     int *ptr = nums;

//     printf("Enter 15 integrs: \n");
//     for (int i = 0; i < 15; i++)
//     {
//         printf("Enter integer %d: ", i + 1);
//         scanf("%d", ptr + i);
//     }

//     array_print(nums, 15);
    
//     return 0;
// }

// Question 6:
// #include<stdio.h>

// int min(int *arr, int size){
//     int min_idx = 0;
//     for(int i = 1; i < size; i++){
//         if (*(arr + min_idx)>*(arr + i))
//         {
//             min_idx = i;
//         }
//     }
//     return min_idx;
// }

// int main () {
//     int arr[8] = {2, 5, 1, 4, 9, 7, 3, 6};
//     int n = min(arr, 8);

//     printf("%d is the min number in array at index %d\n", arr[n], n);
//     return 0;
// }

// Question 7:
// #include<stdio.h>
// #include<string.h>

// void swap(char *x, char *y){
//     char temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void permute(char *str, int l, int r){
//     if (l==r)
//     {
//         printf("%s\n", str);
//     }
//     else
//     {
//         for(int i = l; i <= r; i++){
//             swap((str+l), (str + i));
//             permute(str, l + 1, r);
//             swap((str+l), (str + i));
//         }
//     }
    
// }
// int main () {
//     char str[100];

//     printf("Enter a string: ");
//     scanf("%s", str);
//     int n = strlen(str);

//     printf("All permutations of the string %s are: \n", str);
//     permute(str, 0, n-1);
//     return 0;
// }

// Question 8:
// #include<stdio.h>

// int strlength(char *arr){
//     int count = 0;
//     while(*(arr + count) != '\0'){
//         count++;
//     }
//     return count;
// }

// int main () {
//     char arr[100];
//     printf("Enter the string: ");
//     scanf("%s", arr);

//     int n = strlength(arr);

//     printf("The length of the string is %d\n", n);
//     return 0;
// }

// Question 9:
// #include<stdio.h>

// void counter(char *arr){
//     int i = 0, vow_cnt= 0, conscnt = 0;
//     while (*(arr + i) != '\0')
//     {
//         if (*(arr+i) == 'a' || *(arr+i) == 'e' || *(arr+i) == 'i' || *(arr+i) == 'o' || *(arr+i) == 'u'|| *(arr+i) == 'A' || *(arr+i) == 'E' || *(arr+i) == 'I' || *(arr+i) == 'O' || *(arr+i) == 'U')
//         {
//             vow_cnt++;
//         }
//         else if ((*(arr+i) >= 'a' && *(arr+i) <= 'z') || (*(arr+i) >= 'A' && *(arr+i) <= 'Z')) {
//             conscnt++;
//         }
//         i++;
//     }
//     printf("Vowels: %d\n", vow_cnt);
//     printf("Consonants: %d\n", conscnt);
// }

// int main () {
//     char arr[100];
//     printf("Enter the string: ");
//     scanf("%s", arr);
//     counter(arr);
//     return 0;
// }

// Question 10:
// #include <stdio.h>

// int linear_search(float *arr, int size, float key) {
//     for (int i = 0; i < size; i++) {
//         if (*(arr + i) == key) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     float arr[10];
//     float key;
//     int result;

//     printf("Enter 10 float values:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Enter float value %d: ", i + 1);
//         scanf("%f", &arr[i]);
//     }

//     printf("Enter the float value to search: ");
//     scanf("%f", &key);

//     result = linear_search(arr, 10, key);

//     if (result != -1) {
//         printf("Element %.2f found at index %d.\n", key, result);
//     } else {
//         printf("Element %.2f not found in the array.\n", key);
//     }

//     return 0;
// }

// Question 11:
// #include <stdio.h>

// void bubble_sort(int *arr, int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - 1 - i; j++) {
//             if (*(arr + j) > *(arr + j + 1)) {
//                 int temp = *(arr + j);
//                 *(arr + j) = *(arr + j + 1);
//                 *(arr + j + 1) = temp;
//             }
//         }
//     }
// }

// int main() {
//     int size;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];

//     printf("Enter %d elements:\n", size);
//     for (int i = 0; i < size; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     bubble_sort(arr, size);

//     printf("Sorted array:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *(arr + i));
//     }
//     printf("\n");

//     return 0;
// }

// Question 12:
// #include <stdio.h>

// void print_nat(int n) {
//     if (n > 0) {
//         print_nat(n - 1);
//         printf("%d ", n);
//     }
// }

// int main() {
//     printf("The first 50 natural numbers are:\n");
//     print_nat(50);
//     printf("\n");
//     return 0;
// }

// Question 13:
// #include <stdio.h>

// int sum_nat(int n) {
//     if (n <= 0) {
//         return 0;
//     }
//     return n + sum_nat(n - 1);
// }

// int main() {
//     int n;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     int sum = sum_nat(n);
//     printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

//     return 0;
// }

// Question 14:
// #include <stdio.h>

// int fibonacci(int n) {
//     if (n <= 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main() {
//     int n;

//     printf("Enter the number of terms in the Fibonacci series: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");

//     return 0;
// }

// Question 15:
// #include <stdio.h>

// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1; 
//     } else {
//         return n * factorial(n - 1); 
//     }
// }

// int main() {
//     int n;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     if (n < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } else {
//         int result = factorial(n);
//         printf("The factorial of %d is: %d\n", n, result);
//     }

//     return 0;
// }

// Question 16:
// #include <stdio.h>
// #include <string.h>

// int is_palin(char *str, int start, int end) {
//     if (start >= end) {
//         return 1;
//     }
//     if (str[start] != str[end]) {
//         return 0;
//     }
//     return is_palin(str, start + 1, end - 1);
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     gets(str);

//     int length = strlen(str);
//     if (is_palin(str, 0, length - 1)) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }

//     return 0;
// }

// Question 17:
// #include <stdio.h>

// int power(int base, int n) {
//     if (n == 0) {
//         return 1;
//     }
//     if (n < 0) {
//         return 0; 
//     }
//     return base * power(base, n - 1);
// }

// int main() {
//     int base, n;

//     printf("Enter the base: ");
//     scanf("%d", &base);
//     printf("Enter the power: ");
//     scanf("%d", &n);

//     if (n < 0) {
//         printf("power should be a non-negative integer\n");
//     } else {
//         int r = power(base, n);
//         printf("%d raised to the power of %d is: %d\n", base, n, r);
//     }

//     return 0;
// }

// Question 18:
// #include <stdio.h>

// void decimalToBinary(int n) {
//     if (n > 1) {
//         decimalToBinary(n / 2);
//     }
//     printf("%d", n % 2);
// }

// int main() {
//     int decimal;

//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal);

//     printf("Binary representation of %d is: ", decimal);
//     decimalToBinary(decimal);
//     printf("\n");

//     return 0;
// }

// Question 19:
// #include <stdio.h>

// void hailstone(int n) {
//     printf("%d ", n);
//     if (n == 1) {
//         return;

//     } else if (n % 2 == 0) {
//         hailstone(n / 2); 
//     } else {
//         hailstone(3 * n + 1);
//     }
// }

// int main() {
//     int number;

//     printf("Enter a positive integer: ");
//     scanf("%d", &number);

//     printf("Hailstone sequence for %d is: ", number);
//     hailstone(number);
//     printf("\n");

//     return 0;
// }

// Question 20:
// #include <stdio.h>

// int binarySearch(int arr[], int left, int right, int target) {
//     if (right >= left) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             return mid;
//         }

//         if (arr[mid] > target) {
//             return binarySearch(arr, left, mid - 1, target);
//         }

//         return binarySearch(arr, mid + 1, right, target);
//     }

//     return -1;
// }

// int main() {
//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target;

//     printf("Enter the number to search: ");
//     scanf("%d", &target);

//     int result = binarySearch(arr, 0, n - 1, target);
//     if (result != -1) {
//         printf("Element found at index: %d\n", result);
//     } else {
//         printf("Element not found in the array.\n");
//     }

//     return 0;
// }