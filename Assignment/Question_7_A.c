/*Q7. Student Marks Analysis (Mini Project)
 Assume a class of 5 students, each having marks in 3 subjects. Store the marks in a
 2D array where each row represents a student and each column represents a subject.
 Perform the following:
 (a) Calculate the total and average marks of each student.*/

#include<stdio.h>
int main() {
    int arr[5][3] = {{50,60,70},{80,70,60,},{90,95,85},{40,50,55},{75,65,70}};
    int average;

    printf("3 subject marks of 5 students is:\n");

    for(int i=0;i<5;i++) {
        printf("Student %d:",i+1);
        for(int j=0;j<3;j++) {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    printf("Total and average marks of each student is:\n");
    for(int i=0;i<5;i++) {
        int total = 0;
        for(int j=0;j<3;j++) {
            total = total + arr[i][j];
        }
        average = total/3;
        printf("Student %d total and average marks respectively are: %d,%d\n",i+1,total,average);
    }
    return 0;
} 