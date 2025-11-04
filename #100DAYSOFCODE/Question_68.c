//Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int n, pos, i;
    
    // Input array size
    scanf("%d", &n);
    int arr[100];
    
    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input position to delete
    scanf("%d", &pos);
    
    // Shift elements to the left from the position
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    n--; // Decrease array size
    
    // Print updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
