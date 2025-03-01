#include<iostream>
using namespace std;

int main(){
	int rows;
	cout << "Enter rows: ";
	cin >> rows;
	
	int cols;
	cout << "Enter cols: ";
	cin >> cols;
	int* arr = new int[rows * cols];
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cin >> arr[i][j];
		}
	}
	cout << endl;
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	
	delete [] arr;
	return 0;
}
