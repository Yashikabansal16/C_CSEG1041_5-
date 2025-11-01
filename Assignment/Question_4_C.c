/*Q4. Matrix Operations
 Write a program to input two 3×3 matrices. Perform and display:
 (c) Matrix multiplication */

#include<stdio.h>
int main() {
    int arr[3][3];
    int brr[3][3];
    int res[3][3];

    printf("Enter elements of first matrix:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d",&brr[i][j]);
        }
    }
    int cr = 3;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            res[i][j] = 0;
            for(int k=0;k<cr;k++) {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    printf("Multiplication of two matrices is:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ",res[i][j]);
        }
        printf("\n");

    }
    return 0;
    
}