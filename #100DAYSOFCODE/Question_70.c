//Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[100];
    
    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input number of rotations
    scanf("%d", &k);
    
    // Normalize k (in case k > n)
    k = k % n;
    
    int temp[100];
    int index = 0;
    
    // Copy last k elements to temp
    for (i = n - k; i < n; i++) {
        temp[index++] = arr[i];
    }
    
    // Copy first n-k elements to temp
    for (i = 0; i < n - k; i++) {
        temp[index++] = arr[i];
    }
    
    // Print rotated array
    for (i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    
    return 0;
}


