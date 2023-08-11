#include <stdio.h>

int main()
{
    FILE *fptr = fopen("data.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    fseek(fptr, 7, SEEK_SET);    // Move 7 bytes from the beginning
    long position = ftell(fptr); // Get the current position

    printf("Current position after fseek: %ld\n", position);

    rewind(fptr); // Move the file pointer back to the beginning

    position = ftell(fptr); // Get the current position again

    printf("Current position after rewind: %ld\n", position);

    fclose(fptr);
    return 0;
}
