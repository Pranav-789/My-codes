#include<stdio.h>

int main() {
	int arr[3][3] = {0};
	int new[3][3] = {0};
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j < 3; j++){
			printf("enter number at index[%d][%d]", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j < 3; j++){
			new[i][j] = arr[j][i];
		}
	}
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d\t", new[i][j]);
		}
		printf("\n");
	}
}
