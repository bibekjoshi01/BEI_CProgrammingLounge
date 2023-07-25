/* Write a program to read a string containing letters
numbers and special characters, tranfer only letters contained in it
into another string using pointer, finally display the second
string containing only alphabets.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char inputString[100];
    char lettersString[100];
    char *inputPtr = inputString;
    char *lettersPtr = lettersString;

    printf("Enter a string containing letters, numbers, and special characters: ");
    fgets(inputString, sizeof(inputString), stdin);

    while (*inputPtr)
    {
        if (isalpha(*inputPtr))
        {
            *lettersPtr++ = *inputPtr;
        }
        inputPtr++;
    }
    *lettersPtr = '\0';

    printf("Letters String: %s\n", lettersString);

    return 0;
}
