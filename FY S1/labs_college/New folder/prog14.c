#include<stdio.h>

int fibnac(int size, int *f, int *s);

int nxtrm(int *f, int *s){
    int temp = *f + *s;
    *f = *s;
    *s = temp;
    int n = *f;
    return n;
}

int main () {
    int s = 0, f = 1;
    fibnac(21, &f, &s);

    return 0;
}

int fibnac(int size, int *f, int *s){
    if (size == 1)
    {
        return 0;
    }
    
    printf("%d\t", nxtrm(f, s));
    fibnac(size - 1, f, s);
    return -1;
}