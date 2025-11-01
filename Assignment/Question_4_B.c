/*Q4. Matrix Operations
 Write a program to input two 3×3 matrices. Perform and display:
 (b) Matrix subtraction */

 #include<stdio.h>
int main() {
    int arr[3][3];
    int brr[3][3];

    printf("Enter elements of first matrix: \n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements of second matrix: \n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            arr[i][j] = arr[i][j] - brr[i][j];
        }
    }
    printf("Subtraction of two matrices is:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}

