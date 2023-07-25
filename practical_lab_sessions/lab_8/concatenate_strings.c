// 7. Write a program to concatenate two strings using pointers.

#include <stdio.h>

void concatStrings(char *str1, char *str2, char *result)
{
    while (*str1 != '\0')
    {
        *result = *str1;
        str1++;
        result++;
    }

    while (*str2 != '\0')
    {
        *result = *str2;
        str2++;
        result++;
    }

    *result = '\0'; // Null-terminate the concatenated string
}

int main()
{
    char str1[50];
    char str2[50];
    char result[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    concatStrings(str1, str2, result);

    printf("Concatenated String: %s\n", result);

    return 0;
}

/*
Exaplaination:

The concatStrings function takes three parameters:

str1: A pointer to the first string (the source string) that we want to concatenate.
str2: A pointer to the second string (the string to be appended) that we want to concatenate with the first string.
result: A pointer to the destination array where the concatenated string will be stored.
The goal of this function is to concatenate the contents of str1 and str2 and store the result in the result array.

Here's how the function works:

The function uses two while loops to traverse str1 and str2, character by character, until the null-terminator ('\0') is encountered.
The null-terminator in C marks the end of a string.

In the first while loop (while (*str1 != '\0')), the function copies each character from str1 to the location pointed to by result.
It does so by dereferencing the pointers using *result = *str1;.
This means it assigns the value of the character pointed to by str1 to the location pointed to by result.

After copying the character, both str1 and result are incremented using str1++; and result++;,
respectively, to move to the next character in str1 and the next available location in the result array.

The first while loop continues until the null-terminator of str1 is encountered, which means it copies all characters of str1 to result.

The second while loop (while (*str2 != '\0')) performs the same process for str2, copying its characters to result until its null-terminator is encountered.
This appends the characters of str2 to the characters already copied from str1.

Finally, after both str1 and str2 have been fully copied to result,
the function adds a null-terminator ('\0') to the end of result to mark the end of the concatenated string.

As a result, the result array will now hold the concatenated string, which is a combination of the characters from str1 followed by the characters from str2.

Remember that the result array should be large enough to hold the concatenated string,
taking into account the lengths of str1 and str2, as well as the null-terminator. Otherwise, it may lead to buffer overflow or unexpected behavior.
*/