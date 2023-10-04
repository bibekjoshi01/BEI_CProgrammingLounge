#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[20];
    char post[20];
    int salary;
};

void updateInfo(struct Employee e[], struct Employee ue[])
{

    for (int i = 0; i < 2; i++)
    {
        if (e[i].salary > 10000)
        {
            strcpy(ue[i].name, e[i].name);
            strcpy(ue[i].post, e[i].post);
            ue[i].salary = e[i].salary;
        }
    }
}

int main()
{
    struct Employee e[2];
    struct Employee ue[2];

    printf("Enter the details of employees: \n");

    printf("Name\tPost\tSalary\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%s %s %d", e[i].name, e[i].post, &e[i].salary);
        printf("\n");
    }

    updateInfo(e, ue);

    printf("Name\tPost\tSalary\n");
    for (int i = 0; i < 2; i++)
    {
        printf("%s %s %d\n", ue[i].name, ue[i].post, ue[i].salary);
    }

    return 0;
}