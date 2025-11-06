/* 2. WAP a C program to Convert temperature from Celsius to Fahrenheit using the
formula: F = (C * 9/5) + 32. */

#include<stdio.h>
int main() {
    float C;

    printf("Enter temperature in celsius: ");
    scanf("%f",&C);

    float F = (C * 9/5) + 32;

    printf("Temperature in fahrenheit is: %.2f",F);
    return 0;
}