/*Q40: Write a program to find the 1’s complement of a binary number and print it.*/

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find length of binary string
    int len = strlen(binary);

    // Compute 1's complement
    for (int i = 0; i < len; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary digit!\n");
            return 1; // Exit with error
        }
    }

    // Print result
    printf("1's Complement = %s\n", binary);

    return 0;
}
