/*Q8: Write a program to find and display the sum of the first n natural numbers.*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using formula method
    sum = (n * (n + 1)) / 2;

    // Output result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}