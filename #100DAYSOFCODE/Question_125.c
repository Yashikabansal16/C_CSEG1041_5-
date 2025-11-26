/*Q125: Open an existing file in append mode and allow the user to enter a new line of text.
Append the text at the end without overwriting existing content.*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar(); // Clear newline left by scanf

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
