//Q77: Check if the elements on the diagonal of a matrix are distinct.

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

    // The matrix must be square for a main diagonal
    if (n != m) {
        printf("False");
        return 0;
    }

    int diagonal[n];
    for (int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    // Check if diagonal elements are distinct
    int distinct = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
