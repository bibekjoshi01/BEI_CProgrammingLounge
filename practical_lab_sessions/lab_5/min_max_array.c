// WAP to find largest and smallest elements in Array

#include <stdio.h>

// function to find the min and max from array
void findMinMax(int arr[], int length, int *min, int *max);

int main()
{
    int arr[100], length, i;
    int min, max;

    printf("Enter the length of array: ");
    scanf("%d", &length);

    printf("Enter the elements of array: \n");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, length, &min, &max);

    printf("The smallest number is: %d\n", min);
    printf("The greatest number is: %d\n", max);
}

void findMinMax(int arr[], int length, int *min, int *max)
{
    int i;
    *min = *max = arr[0];

    for (i = 0; i < length; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        else if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}
