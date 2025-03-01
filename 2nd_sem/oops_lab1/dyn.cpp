#include<bits/stdc++.h>
using namespace std;

int main(){
	int* arr = new int[10];
	
	for(int i = 0; i < 10; i++){
		cout << "Index " << i+1 << ":" << endl;
		cin >> arr[i];
	}
	
	for(int i = 0; i < 10; i++){
		cout << arr[i] << '\t';
	}
	cout << endl;
	
	delete [] arr;
	
	return 0;
}
