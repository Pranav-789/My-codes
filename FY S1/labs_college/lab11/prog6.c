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

    destFile = fopen("destination.txt", "w");
    if(destFile == NULL){
        printf("Error opening destination file\n");
        fclose(sourceFile);
        return 0;
    }

    while((ch == fgetc(sourceFile)) != EOF){
        fputc(ch, destFile);
    }
    printf("File copied successfully.\n");
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}