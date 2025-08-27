/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    // Conversion
    hours = seconds / 3600;            // 1 hour = 3600 seconds
    minutes = (seconds % 3600) / 60;   // Remaining seconds to minutes
    seconds = seconds % 60;            // Remaining seconds

    // Output result
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}