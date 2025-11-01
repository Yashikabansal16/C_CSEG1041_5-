/*Q1. Write a program to input n integers into an array and perform the following using loops:
(c) Count how many numbers are even and how many are odd.*/

#include<stdio.h>
int main() {
    int n,even = 0,odd = 0;
    
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements of array:\n",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++) {
        if(arr[i] % 2 == 0) {
            even++;
        }
        if(arr[i] % 2 != 0) {
             odd++;
        }
    }
    printf("Total even numbers are: %d \n",even);
    printf("Total odd numbers are: %d",odd);

    return 0;

    
}