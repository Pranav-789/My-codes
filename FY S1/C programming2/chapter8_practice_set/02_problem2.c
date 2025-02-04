#include<stdio.h>

int main () {
    char st[6];

   // scanf("%s", st);
   for (int i = 0; i < 5; i++)
   {
    scanf("%c", &st[i]);
    fflush(stdin); // to flush newline character
   }
   st[5] = '\0';
   
    printf("%s", st);
    return 0;
}