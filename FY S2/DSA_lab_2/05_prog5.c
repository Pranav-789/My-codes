#include<stdio.h>

int main(){
    float array[3][3] = {0};
    float max = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &array[i][j]);
            if(array[i][j] > max){
                max = array[i][j];
            } 
        }
    }
    
    printf("%f is the largest element in array\n", max);
}