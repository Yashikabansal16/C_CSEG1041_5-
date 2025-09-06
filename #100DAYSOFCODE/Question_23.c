//Q23: Write a program to calculate a library fine based on late days.

#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        fine = 0;
    } else if (days <= 5) {
        fine = days * 2;  
    } else if (days <= 10) {
        fine = (8 * 1) + (days - 2) * 4; 
    } else if (days <= 20) {
        fine = (12 * 1) + (days - 2) * 6; 
    } else if (days <= 30) {
        fine = (16 * 1) + (days - 2) * 8;
    }  else if (days > 30) {     
        printf("Membership is cancelled due to more than 30 days late.\n");
    }

    if (days > 0)
        printf("Late days: %d\nFine: $%.2f\n", days, fine);
    else
        printf("No fine.\n");

    return 0;
}