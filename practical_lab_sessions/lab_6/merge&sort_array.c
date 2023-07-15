#include <stdio.h>
#define MAX_SIZE 100

void descendArray(int mergedArray[], int size)
{
    int a;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (mergedArray[j] < mergedArray[j + 1])
            {
                a = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = a;
            }
            else if (mergedArray[j] == mergedArray[j + 1])
            {
                continue;
            }
        }
    }
}

void mergeArray(int array1[], int array2[], int length, int mergedArray[])
{
    int i, j, k;

    // Merge array1 and array2 into mergedArray
    for (i = 0; i < length; i++)
    {
        mergedArray[i] = array1[i];
    }

    for (j = 0, k = length; j < length; j++, k++)
    {
        mergedArray[k] = array2[j];
    }

    descendArray(mergedArray, length * 2);
}

int main()
{
    int length, i;
    int array1[MAX_SIZE], array2[MAX_SIZE];
    int mergedArray[MAX_SIZE * 2];

    // Getting length of the array
    printf("\nEnter the length of the array: ");
    scanf("%d", &length);

    // Getting array elements
    printf("Enter the elements of array1: \n");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the elements of array2: \n");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &array2[i]);
    }

    mergeArray(array1, array2, length, mergedArray);

    printf("Displaying Merged and Sorted Array: \n");
    for (i = 0; i < length * 2; i++)
    {
        printf("%d\t", mergedArray[i]);
    }

    printf("\n\n");
    return 0;
}
