/*Q38: Write a program to find the sum of digits of a number.*/

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract digits and add them
    while (num > 0) {
        digit = num % 10;   // Get last digit
        sum += digit;       // Add to sum
        num = num / 10;     // Remove last digit
    }

    // Output result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
