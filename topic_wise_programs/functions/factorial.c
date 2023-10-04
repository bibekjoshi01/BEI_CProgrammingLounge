// Create a C function to calculate the factorial of a given positive integer.
// Use this function to compute and print the factorial of a number provided by the user.

#include <stdio.h>
long long factorial(int x);

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    long long fact = factorial(num);

    printf("The factorial of %d is %ld", num, fact);
}

long long factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return (x * factorial(x - 1));
    }
}