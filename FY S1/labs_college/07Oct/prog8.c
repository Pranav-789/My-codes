#include<stdio.h>

int main() {
	int arr[4][4] = {0};
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("Enter the number at index [%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	int sum = 0;
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(i == j){
				 sum = sum + arr[i][j];
			}
		}
	}
	
	printf("\t %d", sum);
	
	return 0;
}
