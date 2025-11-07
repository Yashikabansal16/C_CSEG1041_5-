//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[20];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // Split the date into integers
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Validate month range (optional)
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    // Print in new format
    printf("Output:\n%02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
