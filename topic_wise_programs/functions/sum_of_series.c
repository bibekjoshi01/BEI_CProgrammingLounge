// Given Series: 1 + 11 + 111 + 1111 + ..... upto N terms

#include <stdio.h>

int generateTerm(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (generateTerm(n - 1) * 10 + 1);
    }
}

int sumOfSeries(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (sumOfSeries(n - 1) + generateTerm(n));
    }
}

int main()
{
    int n;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    int result = sumOfSeries(n);

    printf("The sum of the series is: %d\n", result);

    return 0;
}