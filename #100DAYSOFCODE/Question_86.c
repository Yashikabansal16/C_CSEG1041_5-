//Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0, flag = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Find string length (excluding '\n' and '\0')
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check palindrome condition
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
