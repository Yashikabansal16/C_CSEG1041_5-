/*Develop a C function ISPRIME (num) that accepts an integer argument and
returns 1 if the argument is prime, a 0 otherwise. Write a C program that
invokes this function to generate prime numbers between the given ranges. */

#include<stdio.h>
int prime(int num) {
    if(num<=1) {
        return 0;
    }
    for(int i=2; i*i<=num; i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int start,end;
    printf("Enter start of range: ");
    scanf("%d",&start);

    printf("Enter end of range: ");
    scanf("%d",&end);

    printf("The prime numbers of %d and %d are: ",start,end);

    for(int i=start; i<=end; i++) {
        if(prime(i)) {
            printf("%d ",i);
        }
    }
    return 0;
}