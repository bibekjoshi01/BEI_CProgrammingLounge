// Write name, CRN and age of a student into a file “student.txt” and read it (use
// fprintf() and fscanf() function).

#include <stdio.h>

int main()
{
    // Write student information to the file
    FILE *file = fopen("student.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char name[50];
    int crn, age;

    printf("Enter student's name: ");
    scanf("%[^\n]s", name);
    printf("Enter student's CRN: ");
    scanf("%d", &crn);
    printf("Enter student's age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\nCRN: %d\nAge: %d\n", name, crn, age);
    fclose(file);

    // Read student information from the file
    file = fopen("student.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char readName[50];
    int readCRN, readAge;

    fscanf(file, "Name: %[^\n]\nCRN: %d\nAge: %d\n", readName, &readCRN, &readAge);
    fclose(file);

    // Display the read information
    printf("\nStudent Information from File:\n");
    printf("Name: %s\nCRN: %d\nAge: %d\n", readName, readCRN, readAge);

    return 0;
}
