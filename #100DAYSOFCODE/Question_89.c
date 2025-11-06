//Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Read the character to count
    scanf("%c", &ch);

    // Count occurrences of the character
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("%d", count);
    return 0;
}
