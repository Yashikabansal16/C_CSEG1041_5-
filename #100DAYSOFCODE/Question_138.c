/*Q138: Print all enum names and integer values using a loop.*/

#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Array of enum names in order
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    // Loop through all enum values (0 to 2)
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
