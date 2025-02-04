#include<stdio.h>
void bblesrt(int arr[], int size);
void inssrt(int arr[], int size);
void slcnsrt(int arr[], int size);

int main () {
    int arr[10] = {2, 3, 6, 1, 4, 5, 9, 7, 10, 8};
    //bblesrt(arr, 10);
    inssrt(arr, 10);
    //slcnsrt(arr, 10);
    return 0;
}

void bblesrt(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return;
}

void slcnsrt(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int min = i;

        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return;
}

void inssrt(int arr[], int size){
    for(int i = 1; i < size; i++){
        int j = i-1;
        int key = arr[i];
        
        while (key < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return;

}