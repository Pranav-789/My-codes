#include<iostream>
using namespace std;

int unique_ele(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int sample_array[5] = {1, 2, 3, 2, 1,};
    cout<< unique_ele(sample_array, 5);
}