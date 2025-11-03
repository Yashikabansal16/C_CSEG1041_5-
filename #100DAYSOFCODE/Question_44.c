/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        float numerator = (2 * i - 1);     // 1, 3, 5, 7, ...
        float denominator = (2 * i);       // 2, 4, 6, 8, ...
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
