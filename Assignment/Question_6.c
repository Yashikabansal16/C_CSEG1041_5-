 /*Q6. Maximum in Each Row & Column
 Write a program that takes a 4 × 4 matrix and finds the maximum element in each
 row and each column. */

#include<stdio.h>
int main() {
    int arr[4][4];

    printf("Enter elements of matrix:\n");
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Maximum element in each row is:\n");
    for(int i=0;i<4;i++) {
        int max_row = arr[i][0];
        for(int j=0;j<4;j++) {
            if(max_row < arr[i][j])
            max_row = arr[i][j];
        }
        printf("%d row maximum element is: %d \n",i+1,max_row);
    }

    printf("Maximum element in each column is:\n");
    for(int j=0;j<4;j++) {
        int max_column = arr[0][j];
        for(int i=0;i<4;i++) {
            if(max_column < arr[i][j])
            max_column = arr[i][j];
        }
        printf("%d column maximum element is: %d\n",j+1,max_column);
    }
    return 0;
}