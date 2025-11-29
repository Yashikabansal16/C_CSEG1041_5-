/*Q145: Return a structure containing top student's details from a function.*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return topper
struct Student findTopper(struct Student students[], int n) {
    int i, topperIndex = 0;

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    return students[topperIndex];
}

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find topper using function
    struct Student topper = findTopper(students, n);

    // Print topper details
    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n",
           topper.name, topper.roll_no, topper.marks);

    return 0;
}
