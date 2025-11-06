//Q85: Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Find the length (excluding '\n' and '\0')
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Print characters in reverse order
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
