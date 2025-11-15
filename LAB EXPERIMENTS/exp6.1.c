/*Develop a recursive and non-recursive function FACT(num) to find the
factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n)
= n * FACT(n-1). Using this function, write a C program to compute the
binomial coefficient. Tabulate the results for different values of n and r with
suitable messages. */

#include<stdio.h>

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * fact(n-1);
    }
} 

int binomial(int n, int r) {
    return fact(n) / (fact(r) * fact(n-r));
}
int main() {
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter r: ");
    scanf("%d",&r);

    for(int i=0; i<=r; i++) {
        printf(" %d\n  %d\n  %d\n ", n , i , binomial(n,i));
    }
    printf("\n");
    return 0;
}