// WAP for deletion of an element from specified location from Array

#include <stdio.h>


void deleteElement(char arr[], int size, int index);

int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    int size = sizeof(arr) / sizeof(arr[0]); // 5
    int index;

    printf("Initial Array: \t");
    for (int i = 0; i < size; i++)
    {
        printf("%c\t", arr[i]);
    }

    printf("\nEnter the index to delete:");
    scanf("%d", &index);

    deleteElement(arr, size, index);
}

void deleteElement(char arr[], int size, int index)
{
    int i;

    if (index >= size || index < 0)
    {
        printf("array index out of range !\n");
        return;
    }

    for (i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Array After Deletion: \n");
    for (i = 0; i < size; i++)
    {
        printf("%c\t", arr[i]);
    }
}
