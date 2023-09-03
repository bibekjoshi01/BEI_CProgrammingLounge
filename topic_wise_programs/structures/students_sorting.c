// write a progtam to read name and age of 10 different students as the two members of a structure named
// "students". Display the name and corresponding age of the students sorted in an alphabetical order

#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 2

struct Students
{
    char name[50];
    int age;
};

void sortStudentDetails(struct Students students[])
{
    for (int i = 0; i < MAX_STUDENTS - 1; i++)
    {
        for (int j = 0; j < MAX_STUDENTS - i - 1; j++)
        {
            if (strcmp(students[j].name, students[j + 1].name) > 0)
            {
                struct Students temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// after reading the age for the first student,
// there's still a newline character (\n) left in the input buffer from the previous input.

void flushInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    struct Students students[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Enter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%[^\n]s", students[i].name);
        flushInputBuffer();

        printf("Enter age: ");
        scanf("%d", &students[i].age);
        flushInputBuffer();
    }

    sortStudentDetails(students);

    // display sorted detail of students
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Details of student %d\n", i + 1);

        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
    }
}