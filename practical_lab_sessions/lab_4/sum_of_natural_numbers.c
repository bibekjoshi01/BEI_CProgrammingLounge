/* 2. Program to calculate sum of first 50 natural numbers using 
recursive function
*/

#include <stdio.h>

int sumOfNaturalNumbers(int n);

int main()
{
    int n = 50;
    int sum = sumOfNaturalNumbers(n);
    printf("Sum of first %d natural numbers: %d\n", n, sum);
    return 0;
}

int sumOfNaturalNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sumOfNaturalNumbers(n - 1);
    }
}