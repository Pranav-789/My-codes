//Eratosthenes Sieve
#include<iostream>
using namespace std;

void sieve(int arr[], int n){		
		for(int i = 2; i < n+1; i++){
			if(arr[i]!= 0){
				for(int j = 2*i; j< n+1; j= j + i){
						arr[j] = 0;
				}	
			}
		}
}

int main(){
	int n;
	cout << "Enter the number: ";
	cin >> n;
	
	int arr[n] = {0};
	
	for(int i = 1; i < n+1; i++){
			arr[i] = i;
	}
	
	sieve(arr, n);
	for(int i = 0; i < n+1; i++){
			if(arr[i] != 0){
					cout << arr[i] << endl;
			}
	}
	return 0;
}
