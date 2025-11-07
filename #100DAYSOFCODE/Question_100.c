//Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("Output:\n");
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            
            if (i != len - 1 || j != len - 1) // print comma except after last substring
                printf(",");
        }
    }
    printf("\n");

    return 0;
}
