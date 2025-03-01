#include<stdio.h>

int main(){
	int arr[10];
	int max = 0;
	printf("Enter the elements in the array: \n");
	for(int i = 0; i < 10; i++){
		printf("Index %d: ", i+1);
		scanf("%d", &arr[i]);
		if(arr[i] > max){
			max = arr[i];
		}
	}
	printf("The largest element in the array is %d", max);
	return 0;
}
