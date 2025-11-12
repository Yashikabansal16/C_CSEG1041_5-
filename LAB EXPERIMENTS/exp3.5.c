/*WAP to enter numbers till the user wants. At the end, it should display the
count of positive, negative, and Zeroes entered.*/ 

#include<stdio.h>
int main() {
    int n, pos = 0, neg = 0, zer = 0;
    char ch;
    
    do {
        printf("Enter a number: ");
        scanf("%d",&n);

        if(n>0) {
            printf("Positive number detected.\n");
            pos++;
        }
        else if(n<0) {
            printf("Negative number detected.\n");
            neg++;
        }
        else if(n==0) {
            printf("Zero detected.\n");
            zer++;
        }
        printf("Do you want to enter more numbers(y/n): \n");
        scanf(" %c",&ch);

    }while(ch == 'y' || ch == 'Y');
    printf("Total positive numbers are: %d\n",pos);
    printf("Total negative numbers are: %d\n",neg);
    printf("Total zeros are: %d\n",zer);

    return 0;
}
    

