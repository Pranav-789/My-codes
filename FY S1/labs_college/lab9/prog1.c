#include<stdio.h>

int factorial(int n);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int f = factorial(n);

    printf("%d is factorial of %d\n", f, n);
    return 0;
}

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

// prog2
#include<stdio.h>

void oddeve(int n);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    oddeve(n);

    return 0;
}

void oddeve(int n){
    if(n % 2 == 0){
        printf("%d is even number\n", n);
        return;
    }
    else{
        printf("%d is odd number\n", n);
        return;
    }
}

//prog3
#include<stdio.h>

void ifprime(int n);

int main () {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    ifprime(n);
    return 0;
}

void ifprime(int n){
    int count = 0;
    for(int i = 2; i < n ; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("%d is a prime number\n", n);
        return;
    }
    else{
        printf("%d is not a prime number\n", n);
        return;
    }
}

//prog4
#include<stdio.h>
void calc(int a, char op, int b);

int main () {
    int a, b;
    char op;

    printf("Enter the num1: ");
    scanf("%d", &a);

    printf("Enter the num2: ");
    scanf("%d", &b);

    printf("Enter operation: ");
    scanf(" %c", &op);

    calc(a, op, b);

    return 0;
}

void calc(int a, char op, int b){
    switch (op)
    {
    case '+':
        printf("The sum of %d and %d is %d\n", a, b, a+b);
        break;
    case '-':
        printf("The difference of %d and %d is %d\n", a, b, a-b);
        break;
    case '*':
        printf("The product of %d and %d is %d\n", a, b, a*b);
        break;

    case '/':
        printf("The divisio of %d and %d is %d\n", a, b, a/b);
        break;
    default:
        break;
    }
}

//prog5
#include<stdio.h>
int power(int a, int b);

int main () {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int b;
    printf("Enter the power: ");
    scanf("%d", &b);

    int p = power(n, b);

    printf("Answer: %d", p);
    return 0;
}

int power(int a, int b){
    int product = 1;
    while (b != 0)
    {
        product = product * a;
        b--;
    }
    return product;
}

//prog6
#include<stdio.h>
int factorial(int n);
int seriessum(int n);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int s = seriessum(n);

    printf("%d is sum of %d terms\n", s, n);
    return 0;
}

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int seriessum(int n){
    int sum = 0;
    while(n != 0){
        sum = sum + factorial(n)/n;
        n--;
    }
    return sum;
}

//prog7
#include<stdio.h>

int lrget(int arr[], int size);

int main () {
    int arr[10] = {1, 2, 3, 5, 6, 10, 7, 8, 9, 4};

    int m = lrget(arr, 10);

    printf("%d is the largest element present at index %d\n", arr[m], m);
    return 0;
}

int lrget(int arr[], int size){
    int max_index = 0;
    for (int i = 1; i < size; i++)
    {
        if(arr[i] > arr[max_index]){
            max_index = i;
        }
    }

    return max_index;
}

//prog8
#include<stdio.h>
#include<string.h>

int un(char arr1[], char arr2[]){
    int count[256] = {0};
    for (int i = 0; i < strlen(arr1); i++)
    {
        count[(int)arr1[i]]++;
    }
    for (int i = 0; arr2[i] != '\0'; i++) {
        count[(int)arr2[i]]--;
        if (count[(int)arr2[i]] < 0) {
            return 0;
        }
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    char arr1[100];
    char arr2[100];
    printf("Enter string1: ");
    gets(arr1);
    printf("Enter string2: ");
    gets(arr2);

    if(un(arr1, arr2)){
        printf("The strings are anagrams\n");
    }
    else{
        printf("The strings are not anagrams\n");
    }
    return 0;
}

//prog9
#include<stdio.h>
void bblesrt(int arr[], int size);
void inssrt(int arr[], int size);
void slcnsrt(int arr[], int size);

int main () {
    int arr[10] = {2, 3, 6, 1, 4, 5, 9, 7, 10, 8};
    //bblesrt(arr, 10);
    inssrt(arr, 10);
    //slcnsrt(arr, 10);
    return 0;
}

void bblesrt(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return;
}

void slcnsrt(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int min = i;

        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return;
}

void inssrt(int arr[], int size){
    for(int i = 1; i < size; i++){
        int j = i-1;
        int key = arr[i];
        
        while (key < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return;

}

//prog10
#include <stdio.h>

int rmvdups(int arr[], int size);

int main() {
    int arr[] = {5, 3, 2, 3, 8, 5, 1, 8, 10, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int uniqueSize = rmvdups(arr, size);
    printf("Number of unique elements: %d\n", uniqueSize);

    return 0;
}

int rmvdups(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = -1;
            }
        }
    }

    int unqcnt = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            arr[unqcnt++] = arr[i];
        }
    }

    printf("Array after removing duplicates: \n");
    for (int k = 0; k < unqcnt; k++) {
        printf("%d\t", arr[k]);
    }
    printf("\n");

    return unqcnt;
}

//prog11
#include<stdio.h>

void lnsrch(int arr[], int size, int key);

void bnsrch(int arr[], int size, int key);


int main () {
    int arr[10]= {1, 2, 3, 4, 5, 7, 9, 10, 13, 16};
    lnsrch(arr, 10, 7);
    bnsrch(arr, 10, 16);
    return 0;
}

void lnsrch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            printf("key found at index %d\n", i);
            return;
        }
    }
}

void bnsrch(int arr[], int size, int key){
    int s = 0, e = size - 1;
    while (s<=e)
    {
        int mid = (s + e)/2;
        if(arr[mid] == key){
            printf("key is present at index %d\n", mid);
            return;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    printf("Key is not present in the array\n");
}

//prog12
#include<stdio.h>

void mergearr(int arr1[], int size1, int arr2[], int size2, int mergedarr[]);

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {2, 3, 6, 8, 9};
    int result[100];

    mergearr(arr, 5, arr2, 5, result);
    return 0;
}

void mergearr(int arr1[], int size1, int arr2[], int size2, int mergedarr[]){
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2){
        if(arr1[i]< arr2[j]){
            if (k == 0 || mergedarr[k-1] != arr1[i])
            {
                mergedarr[k++] = arr1[i];
            }
            i++;
        }
        else if(arr1[i]> arr2[j]){
            if(arr2[j] != mergedarr[k-1] || k == 0){
                mergedarr[k++] = arr2[j];
            }
            j++;
        }
        else{
            if (k == 0 || mergedarr[k - 1] != arr1[i]) {
                mergedarr[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }

    while(i < size1){
        if (k == 0 || mergedarr[k - 1] != arr1[i]) {
            mergedarr[k++] = arr1[i];
        }
        i++;
    }

    while (j < size2)
    {
        if (k == 0 || mergedarr[k - 1] != arr2[j]) { // Check for duplicates
            mergedarr[k++] = arr2[j];
        }
        j++;
    }
    
    for(int l = 0; l < k; l++){
        printf("%d\t", mergedarr[l]);
    }
    printf("\n");
}

//prog13
#include <stdio.h>

int remove_duplicates(int arr[], int size);

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, size);

    int newSize = remove_duplicates(arr, size);

    printf("Array after removing duplicates: ");
    print_array(arr, newSize);
    printf("New size of the array: %d\n", newSize);

    return 0;
}

int remove_duplicates(int arr[], int size) {
    if (size == 0){
        return 0;
    }
    int newSize = 1;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[newSize - 1]) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    
    return newSize;
}

//prog14
#include<stdio.h>

int strlength(char arr[]);

int main () {
    char arr[100];
    printf("Enter the string: ");
    gets(arr);
    int n = strlength(arr);
    printf("The length of string is %d\n", n);
    return 0;
}

int strlength(char arr[]){
    int count = 0;
    while (arr[count] != '\0')
    {
        count++;
    }
    return count;
}

//prog15
#include<stdio.h>
#include<string.h>

void longest(char arr[]);

int main () {
    char arr[100];
    printf("Enter the string: ");
    fgets(arr, sizeof(arr), stdin);
    longest(arr);

    return 0;
}

void longest(char arr[]){
    int max = 0;
    int i = 0;
    int s = 0;
    int lngst = 0;
    char marr[100];
    while(arr[i] != '\0'){
        if(arr[i] == ' '){
            int e = i - 1;
            if((e - s + 1) > max){
                max = (e- s+1);
                lngst = s;
            }
            s = i + 1;
        }
        i++;
    }
    int e = i - 1;
    if((e - s + 1) > max){
        max = (e - s + 1);
        lngst = s;
    }
    int j;
    for (j = 0; j < max; j++)
    {
        marr[j] = arr[lngst + j];
    }
    marr[j] = '\0';
    
    printf("%s is longest substring\n", marr);
}

//prog16
#include<stdio.h>
#include<string.h>


void revword(char arr[]);

int main () {
    char arr[20] = "Hello World";
    revword(arr);
    return 0;
}

void revword(char arr[]){
    int i = 0, s = 0, e = 0;
    while(arr[i] != '\0'){
        if (arr[i] == ' ')
        {
            e = i - 1;
            while(s < e){
                char temp = arr[s];
                arr[s] = arr[e];
                arr[e] = temp;
                s++;
                e--;
            }
            s = i + 1;
        }
        i++; 
    }
    e = i-1;
    while(s < e){
        char temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

    printf("%s", arr);
}