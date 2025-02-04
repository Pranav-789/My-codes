#include<stdio.h>

int main() {
	int arr[10] = {1, 22, 3, 17, 5, 63, 7, 8, 9, 10};
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 9; j++){
			if(arr[j] < arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(int k = 0; k < 10; k++){
		printf("%d\t", arr[k]);
	}
}
