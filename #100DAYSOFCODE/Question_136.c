/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations
using switch.*/

#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char opt[20];
    int a, b;
    enum Operation choice;

    // Input format: ADD 10 20
    scanf("%s %d %d", opt, &a, &b);

    // Convert string to enum
    if (strcmp(opt, "ADD") == 0)
        choice = ADD;
    else if (strcmp(opt, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(opt, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Perform operation
    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
