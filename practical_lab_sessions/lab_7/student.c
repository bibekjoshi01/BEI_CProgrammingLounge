// Create a structure name student which contains of student id, student name, marks 
// of three subject and total marks. WAP which takes input of ten students and display table.
// Also display student information seprately who got highest total.

#include <stdio.h>

#define NUM_STUDENTS 2

struct Student {
    int id;
    char name[50];
    int marks[3];
    int totalMarks;
};

void inputStudents(struct Student students[]) {
    printf("Enter student details:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Marks of three subjects:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }
}

void calculateTotalMarks(struct Student students[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += students[i].marks[j];
        }
        students[i].totalMarks = total;
    }
}

void displayTable(struct Student students[]) {
    printf("\n\nStudent Information:\n");
    printf("-----------------------------------------------------------------------------------------------\n");
    printf("ID\t\tName\t\tSubject 1\tSubject 2\tSubject 3\tTotal\n");
    printf("-----------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\n", students[i].id, students[i].name,
               students[i].marks[0], students[i].marks[1], students[i].marks[2], students[i].totalMarks);
    }

    printf("-----------------------------------------------------------------------------------------------\n");
}

void displayHighestTotal(struct Student students[]) {
    int maxTotal = students[0].totalMarks;
    int maxIndex = 0;

    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (students[i].totalMarks > maxTotal) {
            maxTotal = students[i].totalMarks;
            maxIndex = i;
        }
    }

    printf("\nStudent with the highest total marks:\n");
    printf("ID: %d\n", students[maxIndex].id);
    printf("Name: %s\n", students[maxIndex].name);
    printf("Subject 1: %d\n", students[maxIndex].marks[0]);
    printf("Subject 2: %d\n", students[maxIndex].marks[1]);
    printf("Subject 3: %d\n", students[maxIndex].marks[2]);
    printf("Total Marks: %d\n", students[maxIndex].totalMarks);
}

int main() {
    struct Student students[NUM_STUDENTS];

    inputStudents(students);
    calculateTotalMarks(students);
    displayTable(students);
    displayHighestTotal(students);

    return 0;
}
