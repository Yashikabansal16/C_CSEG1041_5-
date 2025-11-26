/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits 
and special characters.*/

#include <stdio.h>
#include <ctype.h>  // for isalpha() and tolower()

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file
    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("Error: File cannot be opened!\n");
        return 1;
    }

    // Read characters one by one
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);   // Convert to lowercase for easy checking

        if (isalpha(ch)) {  // Check only alphabet characters
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    // Output the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    fclose(fp);
    return 0;
}
