#include<stdio.h>

int main () {

    int arr[3][3];
    for(int i = 0; i<3; i++){
		for(int j = 0; j < 3; j++){
			printf("enter number at index[%d][%d]", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

    int count = 0;
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d\t", arr[i][j]);
            if (arr[i][j] == 0)
            {
                count++;
            }
		}
        
		printf("\n");
	}
	printf("\n");

    if(count >= 5){
        printf("sparse matrix");
    }


    return 0;
}