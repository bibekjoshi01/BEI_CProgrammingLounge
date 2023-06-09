/* 6. Program to find the minimum and maximum number from array of numbers */

#include <stdio.h>

void findMinAndMax(int numbers[], int length, int *min, int *max);

int main()
{
    int numbers[100], length, i;
    int min, max;

    printf("Enter the length of the array: ");
    scanf("%d", &length);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &numbers[i]);
    }

    findMinAndMax(numbers, length, &min, &max);

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
}

void findMinAndMax(int numbers[], int length, int *min, int *max)
{
    int i;

    // Initialize min and max with the first element
    *min = *max = numbers[0];

    // Traverse the array and update min and max if necessary
    for (i = 1; i < length; i++)
    {
        if (numbers[i] < *min)
            *min = numbers[i];
        if (numbers[i] > *max)
            *max = numbers[i];
    }
}
