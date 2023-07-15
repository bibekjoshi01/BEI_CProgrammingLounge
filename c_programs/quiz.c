#include <stdio.h>
#include <string.h>

int main()
{
    int totMarks = 0;
    int life = 2;

    char questions[3][100] = {
        "1. What is the capital city of Nepal? (KTM, POK, MNR)",
        "2. What is the capital city of India? (Delhi, Mumbai, Patna)",
        "3. What is the father of Computer Science? (Charles, Bibek, Alan)"};

    char correctAnswers[3][20] = {
        "KTM",
        "DELHI",
        "ALAN",
    };

    char answer[3][20];

    for (int i = 0; i < 3; i++)
    {
        printf("\nRemaning life: %d\n", life);
        if (life == 0)
        {
            break;
        }

        printf("%s\n", questions[i]);

        for (int i = 0; i < 50; i++)
        {
            printf("*");
        }

        printf("\nYour Answer:\t");
        scanf("%s", &answer[i]);

        if (strcmp(strupr(answer[i]), correctAnswers[i]) != 0)
        {
            printf("Wrong Answer. Try Again !\n");
            printf("Correct Answer is: %s \n", correctAnswers[i]);
            life--;
        }
        else
        {
            printf("Right Answer !\n");
            totMarks += 1;
        }
        for (int i = 0; i < 50; i++)
        {
            printf("*");
        }
    }

    printf("\nYour final Score is: %d", totMarks);
}
