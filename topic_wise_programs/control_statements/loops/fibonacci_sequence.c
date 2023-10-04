// Write a C program to print the first 10 terms of the Fibonacci sequence using a for loop.

#include <stdio.h>

int main()
{
    int first = 0, second = 1, next;
    printf("First 10 terms of fibonacci sequence .... \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

