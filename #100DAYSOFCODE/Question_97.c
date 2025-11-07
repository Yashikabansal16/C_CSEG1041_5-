//Q97: Print the initials of a name.

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

    printf("Output:\n");

    // Print first character if it's a letter
    if (isalpha(name[0]))
        printf("%c.", toupper(name[0]));

    // Loop through the string to find spaces
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && isalpha(name[i]))
            printf("%c.", toupper(name[i]));
    }

    printf("\n");
    return 0;
}

