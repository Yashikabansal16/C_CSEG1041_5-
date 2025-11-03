//Q50: Write a program to print the following pattern:

#include <stdio.h>

int main() {
    int i, j, space;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 5; j >= i; j--) {
            printf("*");
        }

        printf("\n");  // Move to next line
    }

    return 0;
}
