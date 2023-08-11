#include <stdio.h>

int main()
{
    // Creating a temporary file
    FILE *tempFile = tmpfile();
    if (tempFile == NULL)
    {
        perror("Error creating temporary file");
        return 1;
    }

    // Writing data to the temporary file
    fprintf(tempFile, "This is temporary data.\n");
    fseek(tempFile, 0, SEEK_SET); // Move to the beginning of the file

    // Reading and printing data from the temporary file
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), tempFile) != NULL)
    {
        printf("Temporary file content: %s", buffer);
    }

    // Generating a temporary filename
    char tmpName[L_tmpnam];
    tmpnam(tmpName);
    printf("Temporary filename: %s\n", tmpName);

    // Renaming the temporary file
    if (rename(tmpName, "new_temp_file.txt") != 0)
    {
        perror("Error renaming file");
        return 1;
    }

    printf("Temporary file renamed successfully.\n");

    // Removing the renamed temporary file
    if (remove("new_temp_file.txt") != 0)
    {
        perror("Error removing file");
        return 1;
    }

    printf("File removed successfully.\n");

    return 0;
}
