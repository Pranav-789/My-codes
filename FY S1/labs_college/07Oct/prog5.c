#include<stdio.h>

int main() {
	char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	char nar[10] = {'k', 'l' , 'm' , 'n', 'a', 'b', 'o', 'p' , 'q', 'j'};
	
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			 if(arr[i] != nar[j]){
			 	printf("(%d, %d)\t", i, j);
			 }
		}
		printf("\n");
	}
	
	return 0;

}
