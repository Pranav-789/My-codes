#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int s, int e){
    int mid = s + (e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    int* first = new int[len1];
    int* sec = new int[len2];

    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }

    k = mid + 1;
    for(int i = 0; i < len2; i++){
        sec[i] = arr[k++];
    }

    k= s;
    int i = 0, j = 0;
    while(i < len1 && j < len2){
        if(first[i] < sec[j]){
            arr[k++] = first[i++];
        }
        else{
            arr[k++] = sec[j++];
        }
    }

    while(i < len1){
        arr[k++] = first[i++];
    }

    while(j < len2) {
        arr[k++] = sec[j++];
    }
    delete[] first;
    delete[] sec;
}


void mergeSort(vector<int>& arr, int s, int e){
    if(s >= e) return;

    int mid = s + (e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}
int main(){
    vector<int> arr = {1, 3, 5, 4, 6, 2};
    mergeSort(arr, 0, 5);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}