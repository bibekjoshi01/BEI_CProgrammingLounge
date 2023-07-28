// Write integer numbers to a file. Read them back and find average of all numbers.

#include <stdio.h>

int main()
{
    FILE *file;
    int num, sum = 0, count = 0;

    // Step 1: Write integer numbers to the file.
    file = fopen("numbers.txt", "w"); // Open file in write mode
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter integer numbers (enter -1 to stop):\n");
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
            break;

        fprintf(file, "%d ", num);
    }

    fclose(file);

    // Step 2: Read the numbers from the file and calculate the average.
    file = fopen("numbers.txt", "r"); // Open file in read mode
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) != EOF)
    {
        sum += num;
        count++;
    }

    fclose(file);

    // Calculate the average
    if (count == 0)
    {
        printf("No numbers entered.\n");
    }
    else
    {
        float average = (float)sum / count;
        printf("Average of all numbers: %.2f\n", average);
    }

    return 0;
}
