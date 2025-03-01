#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int *ptr;
	
	ptr = (int*)malloc(n * sizeof(int));
	
	if(ptr == NULL){
		printf("Memory not allocated\n");
	}
	
	else{
		for(int i = 0; i < n; i++){
			printf("Index %d: ", i+1);
			int k;
			scanf("%d", &k);
			ptr[i] = k;
		}
		
		printf("The array: ");
		
		for(int i = 0; i < n; i++){
			printf("%d\t", ptr[i]);
		}
		
	}
	
	return 0;
}
