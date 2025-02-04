#include<stdio.h>

int main() {
	int arr[8] = {0};
	
	for(int i =0; i < 8; i++){
		printf("Enter element in at index %d ", i);
		scanf("%d", &arr[i]);
	}
	
	int start = 0, end = 7;
	int mid;
	
	int key;
	printf("Enter key ");
	scanf("%d", &key);
	int false = 0;
	
	for(int j = 0; j < 8; j++){
		mid = (start + end)/2;
		
		if(arr[mid] == key){
			printf("the key matched at index %d", mid);
			break;
		}
		else if(key > arr[mid]){
			start = mid + 1;
		}
		else if(key < arr[mid]){
			end = mid - 1;
		}
		else{
			false = 1;
		}
		
	}
	if(false == 1){
		printf("Key not found");
	}
}

