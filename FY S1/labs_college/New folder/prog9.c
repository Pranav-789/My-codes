#include<stdio.h>

int strlen(char *str){
    int count = 0;
    int i = 0;
    while (*(str + i) != '\0')
    {
        count++;
        i++;
    }
    
    return count;
}

void count(char* str, int vowel, int consonent){
    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        if (*(str + i) == 'a' || *(str + i) == 'A' || *(str + i) == 'e' || *(str + i) == 'E' || *(str + i) == 'i' || *(str + i) == 'I' || *(str + i) == 'o' || *(str + i) == 'O' || *(str + i) == 'u' || *(str + i) == 'U')
        {
            vowel++;
        }
        else if(*(str + i) > 'a' && *(str + i) <= 'z' || *(str + i) > 'A' && *(str + i) <= 'Z' )
        {
            consonent++;
        }
    }

    printf("There are %d vowels and %d consonents in given string\n", vowel, consonent);
}

int main () {
    char arr[100] = "IIIT PUNE";
    int vowel = 0, consonent = 0;

    count(arr, vowel, consonent);
    return 0;
}