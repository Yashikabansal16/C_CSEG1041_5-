 /* Q1. Write a program to input n integers into an array and perform the following using loops:
 (a) Find the largest and smallest number. */

#include<stdio.h>
int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter %d elements: \n",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    printf("Maximum element is: %d \n",max);
    printf("Minimum element is: %d",min);
    return 0;
}
