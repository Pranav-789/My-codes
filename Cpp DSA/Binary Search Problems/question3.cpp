//lecture 14
// Find pivot in an array
#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid;
    while (s < e)
    {
        mid = s + (e-s)/2;

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        
    }
    return s;
    
}
int main() {
    int arr[5] = {8, 10, 17, 1, 3};

    cout<< "Pivot is at index " << getPivot(arr, 5) << endl;
}