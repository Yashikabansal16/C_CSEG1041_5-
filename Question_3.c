/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include<stdio.h>
int main() {
    int length , breadth;

    printf("Enter length of rectangle:  ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle:  ");
    scanf("%d", &breadth);

    printf("Area of rectangle: %d\n", length*breadth);
    printf("Perimeter of rectangle: %d", 2*(length + breadth));
    return 0;
}