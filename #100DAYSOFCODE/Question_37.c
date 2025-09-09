/*Q37: Write a program to find the LCM of two numbers.*/

#include <stdio.h>

int main() {
    int a, b, max, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Maximum of two numbers (start from here)
    max = (a > b) ? a : b;

    // Find LCM
    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
