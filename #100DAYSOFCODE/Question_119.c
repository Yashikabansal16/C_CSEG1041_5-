/*Q119: Write a program to take an integer array as input. Only one element will be repeated.
Print the repeated element. Try to find the result in one single iteration.*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int visited[100000] = {0};  // assuming array values are within reasonable range

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check in SAME iteration
        if (visited[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }

        visited[arr[i]] = 1;
    }

    return 0;
}
