//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        float numerator = 2 * i;           // 2, 4, 6, 8, ...
        float denominator = 4 * i - 1;     // 3, 7, 11, 15, ...
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
