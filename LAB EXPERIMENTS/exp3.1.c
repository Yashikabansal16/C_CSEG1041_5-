/* 1.WAP to take check if the triangle is valid or not. If the validity is established, do
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides
of the triangle as input from a user. */

#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a,&b,&c);

    if((a+b)>c && (b+c)>a && (c+a)>b) {
        printf("valid triangle\n");

        if(a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        else if(a == b || b == c || c == a) {
            printf("isosceles triangle\n");
        }
        else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) {
            printf("right angle triangle\n");
        }
        else {
            printf("scalene triangle\n");
        }

    }
    else {
        printf("Invalid triangle\n");
    }
    return 0;
    
}