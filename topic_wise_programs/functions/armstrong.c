#include <stdio.h>

int armstrong(int num);

int main()
{
    int n = 153;

    int sum = armstrong(n);

    if (sum == n)
    {
        printf("Armstrong !");
    }
    else
    {
        printf("Not Armstrong !");
    }

    return 0;
}

int armstrong(int num)
{
    int rem;

    rem = num % 10;
    if (num < 0)
    {
        return 0;
    }
    else
    {
        return (rem * rem * rem + armstrong(num /= 10));
    }
}