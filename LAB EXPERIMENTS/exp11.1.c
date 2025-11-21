/*Write a program to apply bitwise OR, AND and NOT operators on bit level. */

#include <stdio.h>

void printBinary(int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);  
    }
}

int main() {
    int a = 5, b = 3;

    printf("a = %d (binary: ", a);
    printBinary(a);
    printf(")\n");

    printf("b = %d (binary: ", b);
    printBinary(b);
    printf(")\n\n");

    // Bitwise AND
    int andResult = a & b;
    printf("a & b = %d (binary: ", andResult);
    printBinary(andResult);
    printf(")\n");

    // Bitwise OR
    int orResult = a | b;
    printf("a | b = %d (binary: ", orResult);
    printBinary(orResult);
    printf(")\n");

    // Bitwise NOT
    int notResult = ~a;
    printf("~a = %d (binary: ", notResult);
    printBinary(notResult);
    printf(")\n");

    return 0;
}
