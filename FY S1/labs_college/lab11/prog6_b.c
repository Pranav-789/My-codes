#include<stdio.h>
#include<stdlib.h>

int main () {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if(sourceFile == NULL){
        printf("Error opening source file\n");
        return 0;
    }

    destFile = fopen("lowercase.txt", "w");
    if(destFile == NULL){
        printf("Error opening lowercase file\n");
        fclose(sourceFile);
        return 0;
    }

    while((ch == fgetc(sourceFile)) != EOF){
        if(ch >= 97 && ch <= 122){
            fputc(ch, destFile);
        }
    }
    printf("lowercase characters copied successfully.\n");
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}