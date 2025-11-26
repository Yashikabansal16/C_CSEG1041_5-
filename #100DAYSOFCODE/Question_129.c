/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers,
compute their sum and average, and print both.*/

#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    // Open the file in read mode
    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: Unable to open numbers.txt\n");
        return 1;
    }

    // Read integers until end of file
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Print results
    if (count > 0) {
        float avg = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    } else {
        printf("No numbers found in the file.\n");
    }

    // Close file
    fclose(fp);

    return 0;
}
