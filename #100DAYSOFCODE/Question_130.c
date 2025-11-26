/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    // Ask how many students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file for writing
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Input student details and write to file
    for (i = 0; i < n; i++) {
        printf("\nEnter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %d", s.name, &s.roll, &s.marks);

        // Write using fprintf
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    // Open file for reading
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    // Read and display records using fscanf
    while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    return 0;
}
