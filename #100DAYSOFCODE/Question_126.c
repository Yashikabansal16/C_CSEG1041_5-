/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the
file pointer is NULL, print an error message; otherwise, read and display its content.*/

#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
    } else {
        char ch;
        printf("File opened successfully.\n\n");
        printf("---- File Content ----\n");

        // Read and print file content
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }

        // Close file
        fclose(fp);
    }

    return 0;
}
