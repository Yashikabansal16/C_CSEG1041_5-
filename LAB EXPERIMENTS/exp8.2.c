/*Perform pointer arithmetic (increment and decrement) on pointers of different
data types. Observe how the memory addresses change and the effects on
data access. */

#include<stdio.h>
int main() {
    int a = 10;
    int b = 25;
    int c = 'y';

    int *p_int = &a;
    int *p_float = &b;
    int *p_char = &c;

    printf("Original Address\n");
    printf("p_int = %p\n",p_int);
    printf("p_float = %p\n",p_float);
    printf("p_char = %p\n",p_char);

    p_int++;
    p_float++;
    p_char++;
    printf("After Increament\n");
    printf("p_int = %p\n",p_int);
    printf("p_float = %p\n",p_float);
    printf("p_char = %p\n",p_char);

    p_int--;
    p_float--;
    p_char--;
    printf("After Decreament\n");
    printf("p_int = %p\n",p_int);
    printf("p_float = %p\n",p_float);
    printf("p_char = %p",p_char);

    return 0;
}