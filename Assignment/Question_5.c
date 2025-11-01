/*Q5. Transpose of a Matrix 
 Write a program to find the transpose of a given 3×3 matrix.*/

#include<stdio.h>
int main() {
    int arr[3][3];
    
    printf("Enter elements of matrix:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of matrix is:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}