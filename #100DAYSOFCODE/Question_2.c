/* Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.*/

#include<stdio.h>
int main() {
    int a , b;

    printf("Enter a:  ");
    scanf("%d", &a);

    printf("Enter b:  ");
    scanf("%d", &b);
    
    printf("Sum of two numbers is %d\n", a + b );
    printf("Difference of two numbers is %d\n", a -b );
    printf("Product of two numbers is %d\n", a*b);
    printf("Quotient of two numbers is %d\n", a/b);
    return 0;
}