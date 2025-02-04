#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] <<" ";
    } cout<<endl;
}

void swapAlt(int arr[], int size){
    for (int i = 0; i < size - 1; i+=2)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main() {

    int arr[5] = {1, 2, 7, 8, 5};

    swapAlt(arr, 5);
    printArray(arr, 5);

    return 0;

}