// 3. Write a program to copy one array to another using pointer.

#include <stdio.h>

void copyArray(int *source, int *destination, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(destination + i) = *(source + i);
    }
}

int main()
{
    int sourceArray[] = {1, 2, 3, 4, 5};
    int destinationArray[5]; // Create an empty array to copy the elements

    int size = sizeof(sourceArray) / sizeof(sourceArray[0]);

    // Call the function to copy the elements from source to destination array
    copyArray(sourceArray, destinationArray, size);

    printf("Source Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", sourceArray[i]);
    }

    printf("\nDestination Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", destinationArray[i]);
    }

    printf("\n");

    return 0;
}