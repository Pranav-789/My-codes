//selection sort asc order

#include<stdio.h>

int main() {
	int arr[10] = {12, 23, 64, 24, 45, 85, 56, 96, 16, 8};
	
	for(int i = 0; i < 10; i++){
		int arr_min = i;
		
		for(int j = i; j < 10; j++){
			if(arr[arr_min] > arr[j]){
				arr_min = j;
			}
		}
		
		if(i != arr_min){
			int temp = arr[i];
			arr[i] = arr[arr_min];
			arr[arr_min] = temp;
		}
	}
	
	for(int k = 0; k < 10; k++){
		printf("%d\t", arr[k]);
	}
	
	return 0;
}
