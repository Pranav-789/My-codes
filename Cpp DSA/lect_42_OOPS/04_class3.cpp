#include<iostream>
using namespace std;

class array{
private:
    int size;
    int *arr = new int[size];

public:
    int getsize(){
        return size;
    }

    void setsize(int s){
        size = s;
    }

    void setarray(){
        cout << "Enter array elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        } 
    }

    int getavg(){
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        return sum / size;
        delete [] arr;
    }
};

int main(){
    array A1;
    int s;
    cout << "Enter size of array: ";
    cin >> s;
    A1.setsize(s);

    A1.setarray();

    cout << "The average of the array is: " << A1.getavg() << endl;
}