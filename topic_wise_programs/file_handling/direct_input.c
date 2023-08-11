#include <stdio.h>

struct Employee {
    char name[50];
    double salary;
};

int main() {
    struct Employee employees[] = {
        {"John Doe", 50000.0},
        {"Jane Smith", 60000.0}
    };

    FILE *fptr = fopen("employee.dat", "wb");

    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Write the entire array to the file
    fwrite(employees, sizeof(struct Employee), 2, fptr);

    fclose(fptr);

    return 0;
}
