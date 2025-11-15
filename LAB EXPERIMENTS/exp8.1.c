/*Declare different types of pointers (int, float, char) and initialize them with the
addresses of variables. Print the values of both the pointers and the variables
they point to. */

#include<stdio.h>
int main() {
    int a = 10;
    float b = 25.0;
    char c = 'Y';

    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;

    printf("Address stored in ptr_int is %p\n",ptr_int);
    printf("Address stored in ptr_float is %p\n",ptr_float);
    printf("Address stored in ptr_char is %p\n",ptr_char);

    printf("values pointed by ptr_int is %d\n",*ptr_int);
    printf("values pointed by ptr_float is %.2f\n",*ptr_float);
    printf("values pointed by ptr_char is %c\n",*ptr_char);

    return 0;
}
