/*Write a program to create a new file and write text into it. */

#include<stdio.h>
int main() {
    FILE *fp;
    char words[100];
    
    // create file
    fp = fopen("firstfile.txt","w");
    
    // check if file created or not
    if(fp == NULL) {
        printf("Error could not create file.\n");
        return 1;
    }
    // enter text
    printf("Enter words: ");
    fgets(words, sizeof(words), stdin);
    
    // print text
    fputs(words,fp);

    printf("FILE CREATED SUCCESSFULLY\n");
    
    // close the file
    fclose(fp);

    return 0;
}