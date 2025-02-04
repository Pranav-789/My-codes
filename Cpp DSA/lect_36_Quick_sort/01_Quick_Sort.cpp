#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot) count++;
    }

    int pivot_index = s + count;
    swap(&arr[s], &arr[s + count]);

    int i = s, j = e;
    while(i < pivot_index && j > pivot_index){
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivot_index && j > pivot_index)
        {
            swap(&arr[i++], &arr[j--]);
        }
        
    }
    return pivot_index;
}

void quickSort(int *arr, int s, int e){
    if(s >= e) return;

    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main(){
    int arr[8] = {3, 2, 6, 1, 7, 4, 10, 5};
    quickSort(arr, 0, 7);

    for(int i = 0; i < 8; i++){
        cout << arr[i] << " ";
    }
    return 0;
}