#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
    return sum;
    
}

int main(){
    // int n;
    // cin >> n;
    // int arr[n]; // Bad practice, as the size will be known at run time

    // using stack memory(static memory allocation)
    // using heap memory(dynamic memory allocation)

    // char ch = 'g';
    // cout << sizeof(ch) << endl;

    // char* c = &ch;
    // cout << sizeof(c) << endl;

    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Answer is "<< ans << endl;

    delete [] arr;
}