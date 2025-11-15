/*Develop a recursive function GCD (num1, num2) that accepts two integer
arguments. Write a C program that invokes this function to find the greatest
common divisor of two given integers. */

#include<stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0) 
        return num1;

        return gcd(num2, num1 % num2);
    
}
int main() {
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);

    int result = gcd(a,b);
    printf("The gcd of %d and %d is %d",a,b,result);

    return 0;
}