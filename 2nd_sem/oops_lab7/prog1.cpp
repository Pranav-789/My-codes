#include<bits/stdc++.h>
using namespace std;

class arry{
	public:

		int arr[50];
		friend class findPairs;
	
	
	void read_arr(){
		cout<< "Enter elements of array: " << endl;
	
		for(int i = 0; i < 50; i++){
			cout << i << ": ";
			cin >> arr[i];
		}
	}
	
	void sortarr(void){
		sort(arr, arr + 50);
	}
};

void findPairs(arry a1){
	for(int i = 2; i < 50; i++){
		int target = a1.arr[i];
		
		for(int j = 0; j < i; j++){
			int sum = 0;
			sum += a1.arr[j];
			for(int k= j+1; k < i; k++){
				sum += a1.arr[k];
				if(sum == target){
					cout << "The pair is " << a1.arr[j] << " " << a1.arr[k] << ": sum = " << a1.arr[j] + a1.arr[k] <<endl;
					break;
				}
				else{
					sum -= a1.arr[k];
				}
			}
		}
	}
}

int main(){
	arry a1;
	a1.read_arr();
	a1.sortarr();
	
	findPairs(a1);

	return 0;
}
