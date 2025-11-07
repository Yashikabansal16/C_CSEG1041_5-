//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n')  // remove newline if present
        name[len - 1] = '\0';

    char *words[20]; // store each word
    int count = 0;

    // Split the name into words
    char *token = strtok(name, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    // Print initials for all except the last word
    for (int i = 0; i < count - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    // Print the surname (last word) in full
    printf(" %s\n", words[count - 1]);

    return 0;
}
