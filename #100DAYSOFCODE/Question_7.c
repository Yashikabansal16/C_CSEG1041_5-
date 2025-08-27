/*Q7: Write a program to swap two numbers without using a third variable.*/

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Swapping without third variable (using arithmetic)
    a = a + b;
    b = a - b;
    a = a - b;

    // Output after swapping
    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}