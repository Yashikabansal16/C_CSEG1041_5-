//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len;

    // Read the input sentence
    gets(str); // Note: Use fgets() in modern C for safety

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; // End current word
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0; // Reset for next word
        }

        if (str[i] == '\0')
            break;
        i++;
    }

    printf("%s", longest);
    return 0;
}
