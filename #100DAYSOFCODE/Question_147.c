/*Q147: Store employee data in a binary file using fwrite() and read using fread().*/

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Open file in write-binary mode
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input employee details and write to file
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp.name);
        printf("ID: ");
        scanf("%d", &emp.id);
        printf("Salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(struct Employee), 1, fp);
    }

    fclose(fp);

    // Open file in read-binary mode
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n--- Employee Data from File ---\n");
    printf("Name\tID\tSalary\n");
    printf("---------------------------\n");

    // Read and display all records
    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        printf("%s\t%d\t%.2f\n", emp.name, emp.id, emp.salary);
    }

    fclose(fp);
    return 0;
}
