/*Q144: Write a function that accepts a structure as parameter and prints its members.*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    // Input student details
    printf("Enter student details:\n");

    printf("Name: ");
    scanf("%s", s.name);

    printf("Roll number: ");
    scanf("%d", &s.roll_no);

    printf("Marks: ");
    scanf("%f", &s.marks);

    // Call function to print student details
    printStudent(s);

    return 0;
}
