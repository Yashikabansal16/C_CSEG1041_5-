//Q90: Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Toggle each character
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;   // lowercase → uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;   // uppercase → lowercase
        i++;
    }

    printf("%s", str);
    return 0;
}
