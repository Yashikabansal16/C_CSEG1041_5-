/*Q150: Use pointer to struct to modify and display data using -> operator.*/

#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s; // pointer pointing to structure variable

    // input details through pointer
    printf("Enter name, roll and marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // displaying modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
