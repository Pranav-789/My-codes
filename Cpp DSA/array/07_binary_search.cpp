#include<iostream>
using namespace std;

int bubblesort(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        
    }
    
}

int binary_sarch(int arr[], int size, int target){
    int start = 0;
    int end = size;
    loop:
    int mid = start + (end - start)/2;     //(start + end)/2;

    if (target == arr[mid])
    {
        return mid;
    }
    else if (target <= arr[mid])
    {
        start = 0;
        end = mid -1;
        goto loop;
    }
    else{
        start = mid + 1;
        end = size;
        goto loop;
    }
}

int main() {
    //binary search is applied only when elements are in monotonic order
    int samplearray[5] = {1, 2, 5, 7, 3};
    bubblesort(samplearray, 5);
    cout<< binary_sarch(samplearray, 5, 7);

    return 0;
}