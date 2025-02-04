#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] <<" ";
    } cout<<endl;
}
void update(int arr[], int n){
    arr[0] = 76;
    printArray(arr, n);
    // what ever change is made here will also changed in main function
    //This happens because here address of index of an array is passed not a variable;
    // if a value at an address is changed it is changed for whole code
}

int main() {
    int arr[5] = {3, 4, 15, 7, 8};

    for (int i = 0; i < 4; i++) { // Only need to iterate 4 times
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout<< "The largest number from array is "<< arr[4] <<endl;
    cout<< "The smallest number from array is "<< arr[0] <<endl;

    update(arr, 5);
    printArray(arr, 5);

    cout<< endl;

    int rev[5];

    for (int j = 0; j < 5; j++)
    {
        int temp = arr[j];
        arr[j] = rev[4-j];
        rev[4-j] = temp;
    }

    printArray(rev, 5);

    int revsize = sizeof(rev)/sizeof(int);

    cout<< "the size of rev array is "<< revsize;
    

}