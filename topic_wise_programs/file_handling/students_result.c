// Write a program in C, to read the following information for 96 students.
// Student Name, Student roll number, Marks obtained(in 100)
// Record all data in "ioe.txt" file, and program should print roll number and name of
// student who have obtained greater than or equal to 40 marks

#include <stdio.h>
#define students_count 3

struct Student
{
    char name[50];
    int rollNo;
    float marks; // out of hundred
};

void flushInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    struct Student students[students_count];

    FILE *fptr;
    fptr = fopen("ioe.txt", "w");

    if (fptr == NULL)
    {
        perror("Error opening the file !");
        return 1;
    }

    // getting students details

    for (int i = 0; i < students_count; i++)
    {
        printf("Enter Details of Student %d: \n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);
        flushInputBuffer();

        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        flushInputBuffer();

        printf("Marks Obtained: ");
        scanf("%f", &students[i].marks);
        flushInputBuffer();

        if (students[i].marks > 100 || students[i].marks < 0)
        {
            printf("Invalid Marks !");
            return 1;
        }

        // Write to the file
        fprintf(fptr, "Name: %s\n", students[i].name);
        fprintf(fptr, "Roll No: %d\n", students[i].rollNo);
        fprintf(fptr, "Marks Obtained: %.2f\n", students[i].marks);
        fprintf(fptr, "\n");
    }

    fclose(fptr);

    // printing students with marks >= 40
    printf("\nStudetns with marks >=40: \n");
    for (int i = 0; i < students_count; i++)
    {
        if (students[i].marks >= 40)
        {
            printf("Roll No: %d, Name: %s\n", students[i].rollNo, students[i].name);
        }
    }

    return 0;
}