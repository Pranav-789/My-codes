// right rotation

#include<stdio.h>

int main () {
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int temp;
	
	for(int i = 0; i < 6; i++){
		int temp = arr[i];
		arr[i] = arr[5];
		arr[5] = temp;
	}
	
	for(int j = 0; j < 6; j++){
		printf("%d\t", arr[j]);
	}

	return 0;
}
