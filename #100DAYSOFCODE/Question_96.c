//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n')  // remove newline if present
        str[len - 1] = '\0';

    char *word_start = NULL;
    char *ptr = str;

    while (*ptr) {
        if (!isspace(*ptr) && word_start == NULL) {
            word_start = ptr; // mark beginning of a word
        }
        if ((isspace(*ptr) || *(ptr + 1) == '\0') && word_start) {
            char *word_end;
            if (isspace(*ptr))
                word_end = ptr - 1;
            else
                word_end = ptr;
            reverseWord(word_start, word_end);
            word_start = NULL;
        }
        ptr++;
    }

    printf("Output: %s\n", str);
    return 0;
}
