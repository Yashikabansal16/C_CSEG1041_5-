/*Write a program to create a new file and write text into it. */

#include<stdio.h>
int main() {
    FILE *fp;
    char words[100];

    fp = fopen("firstfile.txt","w");

    if(fp == NULL) {
        printf("Error could not create file.\n");
        return 1;
    }
    printf("Enter words: ");
    fgets(words, sizeof(words), stdin);

    fputs(words,fp);

    printf("FILE CREATED SUCCESSFULLY\n");

    fclose(fp);

    return 0;
}