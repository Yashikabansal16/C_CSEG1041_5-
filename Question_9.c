/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal, rate, time, SI, CI, amount;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest formula
    SI = (principal * rate * time) / 100;

    // Compound Interest formula
    amount = principal * pow((1 + rate / 100), time);
    CI = amount - principal;

    // Output results
    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f\n", CI);

    return 0;
}