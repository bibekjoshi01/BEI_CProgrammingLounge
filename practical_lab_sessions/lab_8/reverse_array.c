// 4.  Write a program to reverse an array using pointers.

#include <stdio.h>

void reverseArray(int *arr, int size)
{

    int *start = arr;          // First Element of Array
    int *end = arr + size - 1; // Second Last Element of Array

    while (start < end)
    {
        // Swap the elements pointed by start and end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers to the next elements
        start++;
        end--;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    // Call the function to reverse the array
    reverseArray(array, size);

    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}