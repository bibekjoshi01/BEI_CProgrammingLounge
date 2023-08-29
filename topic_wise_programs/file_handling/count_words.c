// Create a C program that reads a text file named "input.txt" and counts the number of words in it.
// Display the total word count on the screen.

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;

    fptr = fopen("intput.txt", "r");

    char name[100];

    if (fptr == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    int count = 0;

    while (fgets(name, sizeof(name), fptr) != NULL)
    {

        if (name[strlen(name) - 1] == '\n')
        {
            name[strlen(name) - 1] = '\0'; // remove newline character from last of string
        }
        count++;
        printf("%s\n", name);
    }

    printf("Number of words: %d", count);

    fclose(fptr);
}