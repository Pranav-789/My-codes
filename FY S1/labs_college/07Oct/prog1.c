#include<stdio.h>

int main() {
	int arr[8] = {0};
	for(int i = 0; i < 8; i++){
		printf("Enter the value at index %d", i);
		scanf("%d", &arr[i]);
	}
	
	int key;
	printf("Enter the key to be found");
	scanf("%d", &key);
	
	for(int j = 0; j < 8; j++){
		if(arr[j] == key){
			printf("Key is at index %d", j);
			break;
		}
	}
	
	printf("Key not found");
	return 0;
}
