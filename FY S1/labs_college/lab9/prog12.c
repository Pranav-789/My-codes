#include<stdio.h>

void mergearr(int arr1[], int size1, int arr2[], int size2, int mergedarr[]);

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {2, 3, 6, 8, 9};
    int result[100];

    mergearr(arr, 5, arr2, 5, result);
    return 0;
}

void mergearr(int arr1[], int size1, int arr2[], int size2, int mergedarr[]){
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2){
        if(arr1[i]< arr2[j]){
            if (k == 0 || mergedarr[k-1] != arr1[i])
            {
                mergedarr[k++] = arr1[i];
            }
            i++;
        }
        else if(arr1[i]> arr2[j]){
            if(arr2[j] != mergedarr[k-1] || k == 0){
                mergedarr[k++] = arr2[j];
            }
            j++;
        }
        else{
            if (k == 0 || mergedarr[k - 1] != arr1[i]) {
                mergedarr[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }

    while(i < size1){
        if (k == 0 || mergedarr[k - 1] != arr1[i]) {
            mergedarr[k++] = arr1[i];
        }
        i++;
    }

    while (j < size2)
    {
        if (k == 0 || mergedarr[k - 1] != arr2[j]) { // Check for duplicates
            mergedarr[k++] = arr2[j];
        }
        j++;
    }
    
    for(int l = 0; l < k; l++){
        printf("%d\t", mergedarr[l]);
    }
    printf("\n");
}