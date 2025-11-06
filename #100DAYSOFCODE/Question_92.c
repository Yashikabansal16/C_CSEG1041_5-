//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // To store frequency of each lowercase letter
    int i = 0, found = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {  // first repeating letter
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }
        i++;
    }

    if (!found)
        printf("No repeating character");

    return 0;
}
