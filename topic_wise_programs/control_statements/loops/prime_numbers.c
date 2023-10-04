// Write a program to display the prime numbers withing given range.

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter the range (n1, n2)");
    scanf("%d %d", &n1, &n2);

    for (int num = n1; num < n2; num++)
    {
        int count = 0;
        for (int j = 2; j * j < num; j++)
        {
            if (num % j == 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            printf("%d\t", num);
        }
    }

    return 0;
}