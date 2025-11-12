/*According to the gregorian calendar, it was Monday on the date 01/01/01. If
Any year is input through the keyboard write a program to find out what is the
day on 1st January of this year. */

#include<stdio.h>
int main() {
    int year; 
    int day = 1;
    printf("Enter a year: ");
    scanf("%d",&year);

    for(int i=1; i<year; i++) {
        if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
            day = (day + 2) % 7;
        }
        else {
            day = (day + 1) % 7;
        }
    }
    switch(day) {
        case 0: printf("The day on 1st January %d is Sunday.\n",year); break;
        case 1: printf("The day on 1st January %d is Monday.\n",year); break;
        case 2: printf("The day on 1st January %d is Tuesday.\n",year); break;
        case 3: printf("The day on 1st January %d is Wednesday.\n",year); break;
        case 4: printf("The day on 1st January %d is Thursday.\n",year); break;
        case 5: printf("The day on 1st January %d is Friday.\n",year); break;
        case 6: printf("The day on 1st January %d is Saturday.\n",year); break;
    }
    return 0;
}
