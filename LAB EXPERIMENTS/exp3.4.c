/*WAP using ternary operator, the user should input the length and breadth of a
rectangle, one has to find out which rectangle has the highest perimeter. The
minimum number of rectangles should be three. */

#include<stdio.h>
int main() {
    int l1,b1,l2,b2,l3,b3;
    printf("Enter length of first rectangle: \n");
    scanf("%d",&l1);
    printf("Enter breadth of first rectangle: \n");
    scanf("%d",&b1);

    printf("Enter length of second rectangle: \n");
    scanf("%d",&l2);
    printf("Enter breadth of second rectangle: \n");
    scanf("%d",&b2);

    printf("Enter length of third rectangle: \n");
    scanf("%d",&l3);
    printf("Enter breadth of third rectangle: \n");
    scanf("%d",&b3);

    int p1 = 2 * (l1 + b1);
    int p2 = 2 * (l2 + b2);
    int p3 = 2 * (l3 + b3);

    (p1 > p2 && p1 > p3) ? printf("Rectangle first hast highest perimeter: %d\n",p1) :
    (p2 > p1 && p2 > p3) ? printf("Rectangle second has highest perimeter: %d\n",p2) :
    (p3 > p1 && p3 > p2) ? printf("Rectangle third has highest perimeter: %d\n",p3) :
                           printf("Two or more rectangle has highest perimeter\n");

    return 0;
}