/*Q148: Take two structs as input and check if they are identical.*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to check if two students are identical
int areSame(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        return 1;  // Same
    } else {
        return 0;  // Different
    }
}

int main() {
    struct Student s1, s2;

    // Input student 1
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input student 2
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare
    if (areSame(s1, s2)) {
        printf("\nSame\n");
    } else {
        printf("\nDifferent\n");
    }

    return 0;
}
