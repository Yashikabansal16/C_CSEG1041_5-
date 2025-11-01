/* Q2. Element Search with Operators 
 Write a program to input n integers in an array. Ask the user for a number and check if
 it exists in the array using the ternary operator. Print "Found" or "Not Found". */

#include<stdio.h>
int main() {
    int n,x;
    int found = 0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);

    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter value to be searched: ");
    scanf("%d",&x);

    for(int i=0;i<n;i++) {
        if(arr[i] == x) {
            found = 1;
            break;
        }
    }
    
    found ? printf("FOUND") : printf("NOT FOUND");
    return 0;
    
}