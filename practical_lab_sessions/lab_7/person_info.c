// Store Information of 10 persons which indicates name and age. 
// But the criteria is for child age should be in form of full birth date, 
// for adult the age should be in years only
// while for aged person store age indicating status 'O'

#include <stdio.h>
#include <string.h>

#define MAX_PERSONS 3

struct Person {
    char name[50];
    char status[15];
    int age;
};

int main() {
    struct Person persons[MAX_PERSONS];

    printf("Enter information for %d persons:\n", MAX_PERSONS);

    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("\nPerson %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", persons[i].name);
        printf("Age: ");
        scanf("%d", &persons[i].age);

        // Check if the person is a child (full birth date), an adult (years only), or old (age above 60)
        if (persons[i].age < 10) {
            strcpy(persons[i].status, "Child");
        } else if (persons[i].age < 60) {
            strcpy(persons[i].status, "Adult");
        } else if (persons[i].age >= 60) {
            strcpy(persons[i].status, "Old");
        } else {
            printf("Invalid Age !");
            break;
        }
    }

    printf("\nPerson Information:\n");
    printf("-----------------------------------------------\n");
    printf("Name\t\tAge\t\tStatus\n");
    printf("-----------------------------------------------\n");

    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\t\t%s\n", persons[i].name, persons[i].age, persons[i].status);
    }

    printf("-----------------------------------------------\n");

    return 0;
}
