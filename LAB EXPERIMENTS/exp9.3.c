/* Open a file, read its content line by line, and display each line on the console. */

#include<stdio.h>
int main() {
    FILE *fp;
    char line[100];

    fp = fopen("firstfile.txt","r");

    if(fp == NULL) {
        printf("Error. cannot find file.\n");
        return 1;
    }
    printf("File content are:\n");
    while(fgets(line,sizeof(line),fp) != NULL) {
        printf("%s",line);
    }

    fclose(fp);

    return 0;
}
