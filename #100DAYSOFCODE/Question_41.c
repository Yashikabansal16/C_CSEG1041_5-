/*Q41: Write a program to swap the first and last digit of a number.*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;  // Get last digit
    digits = (int)log10(num); // Find total digits - 1
    firstDigit = num / pow(10, digits); // Get first digit

    // Remove first digit
    int middle = num % (int)pow(10, digits);
    middle = middle / 10; // Remove last digit

    // Construct swapped number
    swappedNum = lastDigit * pow(10, digits) + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
