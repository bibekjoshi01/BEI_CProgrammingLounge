// Write a C program to calculate the sum of digits of a given number unless
// the sum becomes a single digit using recursion

// HINT: 9875 --> 29 --> 11 --> 2

#include <stdio.h>

int findSum(int num)
{
    if (num < 10)
    {
        return num;
    }
    else
    {
        return num % 10 + findSum(num / 10);
    }
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    int sum = findSum(num);

    printf("The required sum is %d", sum);
}