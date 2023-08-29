#include <stdio.h>

int main()
{
    char word[] = "HELLO";
    int len = sizeof(word) / sizeof(word[0]);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", word[j]);
        }
        printf("\n");
    }

    for (int i = len - 1; i > 0; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            printf("%c", word[j]);
        }
        printf("\n");
    }
}