/*Q39: Write a program to find the product of odd digits of a number.*/

#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit
    while (num > 0) {
        digit = num % 10;   // Get last digit
        if (digit % 2 != 0) {  // Check if odd
            product *= digit;
            hasOdd = 1;
        }
        num = num / 10;     // Remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}