/*4.Write a C program to add two numbers, take number from user. */

#include<stdio.h>
int main() {
    int a,b;
    int sum = 0;

    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);

    sum = a + b;
    printf("Sum is: %d", sum);

    return 0;

}
