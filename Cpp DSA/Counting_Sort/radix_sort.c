#include<stdio.h>

void cnt_sort(int *arr, int pos){
    int cntarr[10];
    for (int i = 0; i < 10; i++)
    {
        cntarr[i] = 0;
    }
    
    for(int j = 0; j < 10; j++){
        cntarr[(*(arr + j)/pos)%10]++;
    }
    printf("exec \n");

    for(int i = 1; i < 10; i++){
        cntarr[i] += cntarr[i-1];
    }
    printf("exec \n");

    int oparr[10];
    for (int i = 9; i >= 0; i--)
    {
        oparr[cntarr[(*(arr + i)/pos)%10] - 1] = *(arr + i);
        cntarr[(*(arr + i)/pos)%10]--;
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

    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int pos = 1; max / pos >0; pos*=10){
        cnt_sort(arr, pos);
    }
    

    printf("Soted array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}