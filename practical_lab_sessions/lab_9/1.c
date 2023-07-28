// Read input characters from user and write it to file 'test_file.c'.
// After that read the content of the same file and display on screen. (Use putc() and get())

#include <stdio.h>

int main()
{
    FILE *file;
    char ch;

    file = fopen("test_file.c", "w+"); // open the file in read mode
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter characters :\n");
    while ((ch = getchar()) != '\n')
    {
        putc(ch, file);
    }

    fclose(file);

    file = fopen("test_file.c", "r"); // Open file in read mode
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("\nContent of the file:\n");
    while ((ch = getc(file)) != EOF)
    {
        putchar(ch);
    }

    fclose(file);

    return 0;
}
