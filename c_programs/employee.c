#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
};

void addEmployee(struct Employee employees[], int *count) {
    if (*count >= MAX_EMPLOYEES) {
        printf("Maximum employee limit reached.\n");
        return;
    }

    struct Employee emp;

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter employee designation: ");
    scanf(" %[^\n]", emp.designation);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    employees[*count] = emp;
    (*count)++;

    printf("Employee added successfully.\n");
}

void searchEmployee(const struct Employee employees[], int count, int empId) {
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (employees[i].id == empId) {
            printf("Employee found:\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Designation: %s\n", employees[i].designation);
            printf("Salary: %.2f\n", employees[i].salary);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee not found.\n");
    }
}

void updateEmployee(struct Employee employees[], int count, int empId) {
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (employees[i].id == empId) {
            printf("Enter new name: ");
            scanf(" %[^\n]", employees[i].name);
            printf("Enter new designation: ");
            scanf(" %[^\n]", employees[i].designation);
            printf("Enter new salary: ");
            scanf("%f", &employees[i].salary);

            printf("Employee information updated successfully.\n");

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee not found.\n");
    }
}

void deleteEmployee(struct Employee employees[], int *count, int empId) {
    int found = 0;
    int index = -1;

    for (int i = 0; i < *count; i++) {
        if (employees[i].id == empId) {
            index = i;
            found = 1;
            break;
        }
    }

    if (found) {
        for (int i = index; i < *count - 1; i++) {
            employees[i] = employees[i + 1];
        }

        (*count)--;
        printf("Employee deleted successfully.\n");
    } else {
        printf("Employee not found.\n");
    }
}

void displayEmployees(const struct Employee employees[], int count) {
    printf("Employee List:\n");

    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Designation: %s\n", employees[i].designation);
        printf("Salary: %.2f\n\n", employees[i].salary);
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice, empId;

    do {
        printf("Employee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Search Employee\n");
        printf("3. Update Employee Information\n");
        printf("4. Delete Employee\n");
        printf("5. Display All Employees\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                printf("Enter employee ID to search: ");
                scanf("%d", &empId);
                searchEmployee(employees, count, empId);
                break;
            case 3:
                printf("Enter employee ID to update: ");
                scanf("%d", &empId);
                updateEmployee(employees, count, empId);
                break;
            case 4:
                printf("Enter employee ID to delete: ");
                scanf("%d", &empId);
                deleteEmployee(employees, &count, empId);
                break;
            case 5:
                displayEmployees(employees, count);
                break;
            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
    } while (choice != 6);

    return 0;
}
