/*Q18: Write a program to assign grades based on a percentage input.*/

#include <stdio.h>

int main() {
    float percentage;

    // Input percentage
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    // Assign grades
    if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 75)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 45)
        printf("Grade: D\n");
    else
        printf("Grade: F (Fail)\n");

    return 0;
}