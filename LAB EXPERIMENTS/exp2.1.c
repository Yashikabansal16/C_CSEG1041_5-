/*Experiment 2: Operators
1. WAP a C program to calculate the area and perimeter of a rectangle based on
its length and width. */

#include<stdio.h>
int main() {
    int l;
    int b;

    printf("Enter length of rectangle: ");
    scanf("%d",&l);

    printf("Enter breadth of rectangle: ");
    scanf("%d",&b);

    int perimeter = l * b;
    int area = 2 * (l + b);

    printf("Perimeter and Area of rectangle respectively are: %d,%d",perimeter,area);

    return 0;
}

