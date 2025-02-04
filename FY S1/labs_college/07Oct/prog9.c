#include<stdio.h>

int main() {
	int arr[5][5];
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			scanf("%d", arr[i][j]);
		}
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < 5; i++){
		int sum = 0;
		for(int j = 0; j < 5; j++){
			sum = sum + arr[i][j];
		}
		printf("line %d has sum equal to %d\n", i, sum);
	}
	
	return 0;
}
  