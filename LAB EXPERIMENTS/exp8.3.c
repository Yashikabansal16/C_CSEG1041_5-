/*Write a function that accepts pointers as parameters. Pass variables by
reference using pointers and modify their values within the function. */

#include<stdio.h>

void modifyvalues(int *x, float *y, char *z) {
    *x = *x + 5;
    *y = *y - 5;
    *z = 'A';
}

int main() {
    int a = 10;
    float b = 25;
    char c = 'y';

    printf("Before function call\n");
    printf("a = %d\n",a);
    printf("b = %.2f\n",b);
    printf("c = %c\n",c);

    modifyvalues(&a,&b,&c);

    printf("After function call\n");
    printf("a = %d\n",a);
    printf("b = %.2f\n",b);
    printf("c = %c\n",c);

    return 0;

}