/*Q36: Write a program to find the HCF (GCD) of two numbers.*/

#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Euclidean Algorithm
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);

    return 0;
}