/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase 
and writes the result to output.txt.*/

#include <stdio.h>
#include <ctype.h>   // for toupper()

int main() {
    FILE *input, *output;
    char ch;

    // Open input file in read mode
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: input.txt cannot be opened!\n");
        return 1;
    }

    // Open output file in write mode
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: output.txt cannot be created!\n");
        fclose(input);
        return 1;
    }

    // Read characters from input.txt and convert to uppercase
    while ((ch = fgetc(input)) != EOF) {
        ch = toupper(ch);      // Convert lowercase → uppercase
        fputc(ch, output);     // Write to output file
    }

    printf("File converted successfully! Check output.txt\n");

    // Close both files
    fclose(input);
    fclose(output);

    return 0;
}
