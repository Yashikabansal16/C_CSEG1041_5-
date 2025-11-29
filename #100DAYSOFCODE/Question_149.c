/*Q149: Use malloc() to allocate structure memory dynamically and print details.*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    // allocate memory dynamically
    s = (struct Student *) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // input details
    printf("Enter name, roll and marks: ");
    scanf("%s %d %f", s->name, &s->roll, &s->marks);

    // output details
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s->name, s->roll, s->marks);

    // free memory
    free(s);

    return 0;
}
