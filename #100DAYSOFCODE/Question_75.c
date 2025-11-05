//Q75: Add two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Reading first matrix size and elements
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Reading second matrix size and elements
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];

    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Checking if addition is possible
    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible");
        return 0;
    }

    int sum[r1][c1];

    // Adding both matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Printing resultant matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
