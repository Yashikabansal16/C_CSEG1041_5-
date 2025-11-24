/*Q112: Write a program to take an integer array arr as input. The task is to find the maximum 
sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output.
If all elements are negative, print the largest (least negative) element.*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // input size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // input array elements
    }

    int max_so_far = arr[0];     // stores the maximum sum found so far
    int current_sum = arr[0];    // stores current subarray sum

    for (int i = 1; i < n; i++) {
        // Extend the current subarray or start a new one
        if (current_sum + arr[i] < arr[i])
            current_sum = arr[i];
        else
            current_sum += arr[i];

        // Update global max
        if (current_sum > max_so_far)
            max_so_far = current_sum;
    }

    printf("%d", max_so_far);

    return 0;
}


