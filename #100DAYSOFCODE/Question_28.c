/*Q28: Write a program to print the product of even numbers from 1 to n.*/

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long to handle large results
    int found = 0;          // flag to check if any even number exists

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: ", n);
    for(i = 2; i <= n; i += 2) {
        printf("%d ", i);
        product *= i;
        found = 1;
    }

    if(found)
        printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("\nNo even numbers in the range 1 to %d\n", n);

    return 0;
}
