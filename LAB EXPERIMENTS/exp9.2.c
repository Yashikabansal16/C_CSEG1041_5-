/*Open an existing file and read its content character by character, and then
close the file. */

#include<stdio.h>
int main() {
    FILE *fp;
    char ch;
    
    // open the file
    fp = fopen("firstfile.txt","r");
    
    // check if file opened or not
    if(fp == NULL) {
        printf("Error. cannot find file.\n");
        return 1;
    }
    // enter content 
    printf("File content are: \n");
    while((ch = fgetc(fp)) != EOF) {
        // print content
        putchar(ch);
    }
    // close the file
    fclose(fp);

    return 0;
}