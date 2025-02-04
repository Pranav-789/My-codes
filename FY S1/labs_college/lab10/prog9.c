#include<stdio.h>

void counter(char *arr){
    int i = 0, vow_cnt= 0, conscnt = 0;
    while (*(arr + i) != '\0')
    {
        if (*(arr+i) == 'a' || *(arr+i) == 'e' || *(arr+i) == 'i' || *(arr+i) == 'o' || *(arr+i) == 'u'|| *(arr+i) == 'A' || *(arr+i) == 'E' || *(arr+i) == 'I' || *(arr+i) == 'O' || *(arr+i) == 'U')
        {
            vow_cnt++;
        }
        else if ((*(arr+i) >= 'a' && *(arr+i) <= 'z') || (*(arr+i) >= 'A' && *(arr+i) <= 'Z')) {
            conscnt++;
        }
        i++;
    }
    printf("Vowels: %d\n", vow_cnt);
    printf("Consonants: %d\n", conscnt);
}

int main () {
    char arr[100];
    printf("Enter the string: ");
    scanf("%s", arr);
    counter(arr);
    return 0;
}