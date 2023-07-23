#include <stdio.h>

int findMinMax(int array[], int len, int *min, int *max)
{
    *min = *max = array[0];

    for (int i = 1; i < len; i++)
    {
        if (*min > array[i])
        {
            *min = array[i];
        }
        else if (*max < array[i])
        {
            *max = array[i];
        }
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 6, 7, 5, 9, 12, 90};
    int len = sizeof(array) / sizeof(array[0]);
    int min, max;
    findMinMax(array, len, &min, &max);
    printf("The maximum and minimum values are %d and %d", min, max);
}