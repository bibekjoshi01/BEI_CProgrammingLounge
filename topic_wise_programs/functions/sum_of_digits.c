#include <stdio.h>

int sumOfDigits(int num);

int main()
{
    int sum = sumOfDigits(555);
    printf("Sum: %d\n", sum);
}

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return ((num % 10) + sumOfDigits(num / 10));
    }
}