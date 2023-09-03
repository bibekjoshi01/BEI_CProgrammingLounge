// Create a structure in C to store the name of a
// batsman, runs scored and no of times the batsman in dismissed. ln the program, read the
// data of five players and display the batting average of the player whose name is entered
// by the user. Batting average is given by totalruns/total-dis

#include <stdio.h>
#include <string.h>

struct Batsman
{
    char name[50];
    int runsScored;
    int dismissed;
};

int main()
{
    struct Batsman batsmen[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of Batsman: \n");

        printf("Name: ");
        scanf("%s", batsmen[i].name);

        printf("Run Scored: ");
        scanf("%s", &batsmen[i].runsScored);

        printf("Dismissed Count: ");
        scanf("%s", &batsmen[i].dismissed);
    }

    char name[50];
    int found = 0;

    printf("\n\nEnter the batsman name: ");
    scanf("%s", name);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(name, batsmen[i].name) == 0)
        {
            float batting_avg = (batsmen[i].runsScored / batsmen[i].dismissed);
            printf("Batting Score: %.2f", batting_avg);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("No records found for %s!\n", name);
    }

    return 0;
}