#include <stdio.h>

struct Employee {
    char name[50];
    double salary;
};

int main() {
    struct Employee employees[2];

    FILE *fptr = fopen("employee.dat", "rb");

    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read the entire array from the file
    fread(employees, sizeof(struct Employee), 2, fptr);

    for (int i = 0; i < 2; i++) {
        printf("Employee Name: %s\n", employees[i].name);
        printf("Employee Salary: %lf\n", employees[i].salary);
    }

    fclose(fptr);

    return 0;
}
