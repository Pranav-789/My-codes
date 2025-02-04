// #include <stdio.h>

// int main()
// {
//     int arr[8] = {5, 7, 3, 2, 4, 6, 8, 1};

//     int arr_min = 0;

//     for (int i = 0; i < 8; i++)
//     {
//         int j;
//         arr_min = i;

//         for (j = i + 1; j < 8; j++)
//         {
//             if (arr[arr_min] > arr[j])
//             {
//                 arr_min = j;
//             }
//         }

//         if (i != arr_min)
//         {
//             int temp = arr[arr_min];
//             arr[arr_min] = arr[i];
//             arr[i] = temp;
//         }
//     }
//     for (int k = 0; k < 8; k++)
//     {
//         printf("%d\t", arr[k]);
//     }

//     return 0;
// }

#include<stdio.h>

int main () {
    int arr[8] = {1, 3, 5, 7, 9, 2, 4, 6};

    int arr_min;

    for (int i = 0; i < 8; i++)
    {
        arr_min = i;

        for (int j = i + 1; j < 8; j++)
        {
            if(arr[arr_min] > arr[j]){
                arr_min = j;
            }
        }

        if(i != arr_min){
            int temp = arr[i];
            arr[i] = arr[arr_min];
            arr[arr_min] = temp;
        }
        
    }

    for (int k = 0; k < 8; k++)
    {
        printf("%d\t", arr[k]);
    }
    
    
    return 0;
}

//practised 23/10/24
// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {2, 3, 6, 1, 9};
    
//     for(int i = 0; i < 5; i++){
//         int arr_min = i;
//         for(int j = i; j < 5; j++){
//             if(arr[j] < arr[arr_min]){
//                 arr_min = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[arr_min];
//         arr[arr_min] = temp;
//     }
    
//     for(int k = 0; k < 5; k++){
//         printf("%d\t", arr[k]);
//     }
    
//     return 0;
// }