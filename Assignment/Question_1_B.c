/* Q1.Write a program to input n integers into an array and perform the following using loops:
(b) Calculate the average of all numbers.*/

#include<stdio.h>
int main() {
    int n,average;
    int sum = 0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements: \n",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    average = sum/n;
    printf("Average of all numbers in tha array is: %d",average);

    return 0;

}