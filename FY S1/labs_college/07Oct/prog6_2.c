// right rotation

#include<stdio.h>

int main () {
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int temp;
	
	for(int i = 1; i < 6; i++){
		int temp = arr[i];
		arr[i] = arr[i-1];
		arr[i-1] = temp;
	}
	
	for(int j = 0; j < 6; j++){
		printf("%d\t", arr[j]);
	}

	return 0;
}
