/*Q123: Read a text file and count the total number of characters, words, and lines. A word
is defined as a sequence of non-space characters separated by spaces or newlines.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {

        characters++;

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Count words
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;   // starting a new word
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0;   // ended a word
        }
    }

    // If file does not end with a newline, still count last line
    if (characters > 0)
        lines++;

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
