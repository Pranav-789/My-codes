#include<stdio.h>
#include<string.h>

int main () {
    char str[] = "Pranav";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }

    for(int i = 0; i < 50; i++){
        if(str[i] == '\0'){
            break;
        }
        if(str[i] >= 'a' && str[i]<='z'){
            str[i] = str[i] - 33;
        }
        else if(str[i] >= 'A' && str[i]<='Z'){
            str[i] = str[i] + 31;
        }
    }
    
    printf("%s", str);
    return 0;
}