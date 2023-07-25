// 5. Write a program to generate fibonacci series upto n terms.
// You may need to make a recursive function to generate the each term of fibonacci series.

#include <stdio.h>

int fibonacciTerm(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacciTerm(n - 1) + fibonacciTerm(n - 2);
    }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", fibonacciTerm(i));
    }
    return 0;
}
