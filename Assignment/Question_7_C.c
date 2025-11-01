/*Assume a class of 5 students, each having marks in 3 subjects. Store the marks in a
 2D array where each row represents a student and each column represents a subject.
 Perform the following:
 (c) Find the subject in which the class performed worst (lowest average marks)*/

#include<stdio.h>
int main() {
    int arr[5][3] = {{50,60,70},{80,70,60,},{90,95,85},{40,50,55},{75,65,70}};
    int average = 0;
    int min_average = 9999;
    int index = -1;

    printf("3 subject marks of 5 students is:\n");

    for(int i=0;i<5;i++) {
        printf("Student %d:",i+1);
        for(int j=0;j<3;j++) {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    for(int j=0;j<3;j++) {
        int subject_total =0;
        for(int i=0;i<5;i++) {
            subject_total = subject_total + arr[i][j];
        }
        average = subject_total / 5;

        if(average < min_average) {
            min_average = average;
            index = j + 1;
        }
    }
    printf("Subject %d has lowest average i.e. %d",index,min_average);

    return 0;
}