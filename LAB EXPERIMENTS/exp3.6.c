/* WAP to print the multiplication table of the number entered by the user. It
should be in the correct formatting. Num * 1 = Num */

#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=1; i<=10; i++) {
        printf("%d\n",num*i);
    }

    return 0;
}