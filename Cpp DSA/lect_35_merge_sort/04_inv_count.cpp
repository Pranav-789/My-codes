#include <iostream>
using namespace std;

void merge(int *arr, int s, int e, int*invcount){
    int mid = (s + e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }
    
    k = mid + 1;
    
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }
    
    int index1 = 0;
    int index2 = 0;
    k = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
            *invcount += len1 - index1;
        }
    }
    while(index1 < len1){
        arr[k++] = first[index1++];
    }
    while(index2<len2){
        arr[k++] = second[index2++];
    }
    delete []first;
    delete []second;
}

void mergesort(int *arr, int s, int e, int* invcount){
    if(s >= e) return;
    
    int mid = (s+e)/2;
    
    mergesort(arr, s, mid, invcount);
    mergesort(arr, mid+1, e, invcount);
    merge(arr, s, e, invcount);
}

int main() {
    int arr[4] = {4, 3, 2, 1};
    int invcount = 0;
    mergesort(arr, 0, 3, &invcount);
    
    cout << "Inversion count: "<< invcount<<endl;
    for(int i = 0; i < 4; i++){
        cout << arr[i] << endl;
    }
    return 0;
}