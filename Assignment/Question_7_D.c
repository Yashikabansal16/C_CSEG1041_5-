/*Q7. Student Marks Analysis (Mini Project)
 Assume a class of 5 students, each having marks in 3 subjects. Store the marks in a
 2D array where each row represents a student and each column represents a subject.
 Perform the following:
 (d) Use sizeof() operator to display the total memory consumed by the array.*/

#include<stdio.h>
int main() {
    int arr[5][3] = {{50,60,70},{80,70,60,},{90,95,85},{40,50,55},{75,65,70}};
    printf("3 subject marks of 5 students is:\n");

    for(int i=0;i<5;i++) {
        printf("Student %d:",i+1);
        for(int j=0;j<3;j++) {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    printf("Total memorary consumed by array is %lu",sizeof(arr));
    return 0;
}