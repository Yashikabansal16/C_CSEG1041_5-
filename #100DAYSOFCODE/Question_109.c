/*Q109: Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }

    int window_sum = 0, max_sum = 0;

    // Step 1: Compute sum of first window
    for (int i = 0; i < k; i++)
        window_sum += arr[i];

    max_sum = window_sum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    printf("Maximum sum of subarray of size %d: %d\n", k, max_sum);

    return 0;
}
