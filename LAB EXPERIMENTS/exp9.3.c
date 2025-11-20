/* Open a file, read its content line by line, and display each line on the console. */

#include<stdio.h>
int main() {
    FILE *fp;
    char line[100];

    // open a file
    fp = fopen("firstfile.txt","r");
    
    // check if file is opened or not
    if(fp == NULL) {
        printf("Error. cannot find file.\n");
        return 1;
    }
    
    // enter content
    printf("File content are:\n");
    while(fgets(line,sizeof(line),fp) != NULL) {
        printf("%s",line);
    }

    // close the file
    fclose(fp);

    return 0;
}
