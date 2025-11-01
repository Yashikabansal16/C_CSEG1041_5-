 /*Assume a class of 5 students, each having marks in 3 subjects. Store the marks in a
 2D array where each row represents a student and each column represents a subject.
 Perform the following:
 (b) Find the highest scorer (student with maximum total marks).*/

#include<stdio.h>
int main() {
    int arr[5][3] = {{50,60,70},{80,70,60,},{90,95,85},{40,50,55},{75,65,70}};
    int max_marks = 0;
    int index = -1;

    printf("3 subject marks of 5 students is:\n");

    for(int i=0;i<5;i++) {
        printf("Student %d:",i+1);
        for(int j=0;j<3;j++) {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<5;i++) {
        int total = 0;
        for(int j=0;j<3;j++) {
            total = total + arr[i][j];
        }
        if(max_marks < total) {
            max_marks = total;
            index = i+1;
        }
    }
    printf("Student %d has highest marks i.e. %d.",index,max_marks);
    return 0;
}