/*Open an existing file and read its content character by character, and then
close the file. */

#include<stdio.h>
int main() {
    FILE *fp;
    char ch;

    fp = fopen("firstfile.txt","r");

    if(fp == NULL) {
        printf("Error. cannot finf file.\n");
        return 1;
    }
    printf("File content are: \n");
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}