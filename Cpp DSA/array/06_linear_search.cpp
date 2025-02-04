#include<iostream>
using namespace std;

int inputarr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<< "Enter the value at index " << i << endl;
        cin>> arr[i];
    }
}

int linearch(int arr[], int size, int num){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==num)
        {
            cout<<"The num "<< num << " is at index "<<i<<endl;
        }
        
    }
    
}

int main() {

    int arr[5];

    inputarr(arr, 5);

    int num;

    cout<<"Enter the number you want to search: ";
    cin>> num;

    linearch(arr, 5, num);

}