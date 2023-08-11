// 10. Write a C program to create a new file named "employee.dat"
// which consist the information of 10 employees. Employee information
// includes empName, salary and post. Read the file back to search the word "manager".

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct EMPLOYEE
{
    char empName[50];
    double salary;
    char post[100];
};

int main()
{
    struct EMPLOYEE employee;
    FILE *fptr;
    fptr = fopen("employee.dat", "wb");

    printf("Enter the employees information: \n");

    do
    {
        printf("\nEmployee Name: ");
        scanf(" %[^\n]s", employee.empName);

        printf("Employee salary: ");
        scanf("%lf", &employee.salary);

        printf("Employee Post: ");
        scanf(" %[^\n]s", employee.post);

        fwrite(&employee, sizeof(employee), 1, fptr);

        printf("Do you want to add another record? (y/n)");
    } while (getche() == 'y' || getche() == 'Y');

    fclose(fptr);

    if ((fptr = fopen("employee.dat", "rb")) == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }

    printf("\n------------------------------------------------\n");

    printf("\nSearching for the word 'manager' in the file:\n");

    printf("\n------------------------------------------------\n");

    struct EMPLOYEE emp;
    while (fread(&emp, sizeof(emp), 1, fptr) == 1)
    {
        if (strstr(emp.post, "manager") != NULL)
        {
            printf("Employee Name: %s\n", emp.empName);
            printf("Employee Salary: %lf\n", emp.salary);
            printf("Employee Post: %s\n", emp.post);
            printf("\n");
        }
    }

    fclose(fptr);
    return 0;
}
