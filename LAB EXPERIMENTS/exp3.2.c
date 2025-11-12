/*WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not. */

#include<stdio.h>
int main() {
    int x1,x2,x3,y1,y2,y3;
    printf("Enter three points: ");
    scanf("(%d %d),(%d %d),(%d %d)",&x1,&y1,&x2,&y2,&x3,&y3);

    float area = 0.5 * (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    // 1/2 in C performs integer division, so it becomes 0 — making the whole area always 0.
    // Use 0.5 or 1.0/2 to ensure floating-point division:

    if(area == 0) 
        printf("collinear points");
    else 
        printf("Not collinear points");
    return 0;
}