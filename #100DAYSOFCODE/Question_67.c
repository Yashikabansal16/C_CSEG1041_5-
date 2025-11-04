//Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, pos, element, i;
    
    // Input array size
    scanf("%d", &n);
    int arr[100];
    
    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input position and element
    scanf("%d %d", &pos, &element);
    
    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert element at given position
    arr[pos - 1] = element;
    n++;
    
    // Print updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
