#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main () {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if(sourceFile == NULL){
        printf("Error opening source file\n");
        return 0;
    }

    destFile = fopen("destination.txt", "w");
    if(destFile == NULL){
        printf("Error opening destination file\n");
        fclose(sourceFile);
        return 0;
    }

    while((ch == fgetc(sourceFile)) != EOF){
        if(islower(ch)){
        fputc(toupper(ch), destFile);
        }
        else if(isupper(ch)){
            fputc(tolower(ch), destFile);
        }
        else{
            fputc(ch, destFile);
        }
    }
    return 0;
}