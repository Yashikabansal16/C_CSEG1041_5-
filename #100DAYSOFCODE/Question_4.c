/*Q4: Write a program to calculate the area and circumference of a circle given its radius.*/
#include <stdio.h>
#define PI 3.1416   // Defining value of PI

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output results
    printf("Area of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circumference);

    return 0;
}