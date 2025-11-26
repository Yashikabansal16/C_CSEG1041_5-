/*Q120: Write a program to take a string input. Change it to sentence case.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int newWord = 1;   // flag to detect new word

    while (str[i] != '\0') {

        if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);   // Capitalize first letter
            newWord = 0;
        } 
        else if (!newWord) {
            str[i] = tolower(str[i]);   // Make other letters lowercase (optional)
        }

        if (str[i] == ' ') {
            newWord = 1;  // Next character starts a new word
        }

        i++;
    }

    printf("Sentence Case: %s", str);

    return 0;
}
