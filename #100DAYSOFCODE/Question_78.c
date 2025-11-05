//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    // Reading matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // The matrix must be square
    if (n != m) {
        printf("Not a square matrix");
        return 0;
    }

    int sum = 0;

    // Summing main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}
