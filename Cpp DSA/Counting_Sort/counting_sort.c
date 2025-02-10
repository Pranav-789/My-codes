#include<stdio.h>

void cnt_sort(int *arr){
    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int s = max + 1;
    printf("exec \n");

    int cntarr[s];
    for (int i = 0; i < s; i++)
    {
        cntarr[i] = 0;
    }
    
    for(int j = 0; j < 10; j++){
        cntarr[*(arr + j)]++;
    }
    printf("exec \n");

    for(int i = 1; i < s; i++){
        cntarr[i] += cntarr[i-1];
    }
    printf("exec \n");

    int oparr[10];
    for (int i = 0; i < 10; i++)
    {
        oparr[cntarr[*(arr + i)] - 1] = *(arr + i);
        cntarr[*(arr + i)]--;
    }
    printf("exec \n");

    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = oparr[i];
    }
    printf("exec \n");
    
}

int main () {
    int arr[10];
    printf("Enter the array elements: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    cnt_sort(arr);

    printf("Soted array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}