// 8. Write a program to sort 5 string words stored in an array of pointers

#include <stdio.h>
#include <string.h>

void bubbleSortStrings(char *arr[], int size)
{
    int i, j;
    char *temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                // Swap the pointers to the strings (not the actual strings)
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char *words[] = {"apple", "banana", "orange", "grape", "pineapple"};
    int size = sizeof(words) / sizeof(words[0]);

    printf("Original Array of Strings:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", words[i]);
    }

    bubbleSortStrings(words, size);

    printf("\nSorted Array of Strings:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}
