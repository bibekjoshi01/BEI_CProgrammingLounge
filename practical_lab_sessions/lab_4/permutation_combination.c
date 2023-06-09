/* 4. Define a function named factorial() to calculate factorial of a number 
and uses that function to calculate permutation and combination 
*/

#include <stdio.h>

unsigned long long factorial(int n);
unsigned long long permutation(int n, int r);
unsigned long long combination(int n, int r);

int main()
{
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    unsigned long long factN = factorial(n);
    unsigned long long perm = permutation(n, r);
    unsigned long long comb = combination(n, r);

    printf("Factorial of %d: %llu\n", n, factN);
    printf("Permutation of %dP%d: %llu\n", n, r, perm);
    printf("Combination of %dC%d: %llu\n", n, r, comb);

    return 0;
}

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

unsigned long long permutation(int n, int r)
{
    unsigned long long factN = factorial(n);
    unsigned long long factNR = factorial(n - r);
    return factN / factNR;
}

unsigned long long combination(int n, int r)
{
    unsigned long long factN = factorial(n);
    unsigned long long factR = factorial(r);
    unsigned long long factNR = factorial(n - r);
    return factN / (factR * factNR);
}
