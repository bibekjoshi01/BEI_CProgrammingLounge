// 4. Write a program to find the sum of following series upto n terms.
// Series: 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + .......

#include <stdio.h>
#include <math.h>

unsigned long long findFactorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * findFactorial(n - 1);
}

int main()
{
    int x, n;
    double sum = 0.0;

    printf("Enter the value of variable x: ");
    scanf("%d", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum += pow(x, i) / findFactorial(i);
    }

    printf("The sum of series upto %d terms is: %.2f", n, sum);
}