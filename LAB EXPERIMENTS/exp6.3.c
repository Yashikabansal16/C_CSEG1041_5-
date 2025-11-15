/*Develop a recursive function FIBO (num) that accepts an integer argument.
Write a C program that invokes this function to generate the Fibonacci
sequence up to num. */

#include<stdio.h>
int fibo(int n) {
    if(n == 1) 
    return 0;
    if(n == 2)
    return 1;

    int result = fibo(n-1) + fibo(n-2);
    return result;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("Fibonacci series are: ");
    for(int i=1; i<=n; i++) {
        printf("%d ",fibo(i));
    }

    return 0;
}
