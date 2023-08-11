// Create an array of structure named EMPLOYEE of size N dynamically. Structure
// has ename, age, address and salary as its members. The array of structure is passed
// to a function which sorts the array in ascending order on the basis of salary and
// displays the sored array from main()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure
struct Employee
{
    char ename[50];
    int age;
    char address[100];
    float salary;
};

// Function to compare salaries for sorting
int compareSalaries(const void *a, const void *b)
{
    struct Employee *empA = (struct Employee *)a;
    struct Employee *empB = (struct Employee *)b;
    if (empA->salary < empB->salary)
        return -1;
    else if (empA->salary > empB->salary)
        return 1;
    else
        return 0;
}

// Function to sort and display the array
void sortAndDisplay(struct Employee *arr, int N)
{
    qsort(arr, N, sizeof(struct Employee), compareSalaries);

    printf("Sorted Employees:\n");
    for (int i = 0; i < N; i++)
    {
        printf("Name: %s, Age: %d, Address: %s, Salary: %.2f\n",
               arr[i].ename, arr[i].age, arr[i].address, arr[i].salary);
    }
}

int main()
{
    int N;

    printf("Enter the number of employees: ");
    scanf("%d", &N);

    // Dynamically allocate memory for the array of structures
    struct Employee *empArray = (struct Employee *)malloc(N * sizeof(struct Employee));
    if (empArray == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input employee information
    for (int i = 0; i < N; i++)
    {
        printf("Enter employee #%d details:\n", i + 1);
        printf("Name: ");
        scanf("%s", empArray[i].ename);
        printf("Age: ");
        scanf("%d", &empArray[i].age);
        printf("Address: ");
        scanf("%s", empArray[i].address);
        printf("Salary: ");
        scanf("%f", &empArray[i].salary);
    }

    // Call the function to sort and display the array
    sortAndDisplay(empArray, N);

    // Free dynamically allocated memory
    free(empArray);

    return 0;
}
