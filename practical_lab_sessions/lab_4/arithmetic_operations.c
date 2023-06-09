/* 1. program to add subtract, multiply and divide two integers using 
user defined function and return type 
*/

#include <stdio.h>

// function to add two numbers
int add(int a, int b)
{
    return (a + b);
}

// function to find difference
int sub(int a, int b)
{
    return (a - b);
}

// function to find product
int product(int a, int b)
{
    return (a * b);
}

// function to find divison
double division(int a, int b)
{
    return (a / b);
}

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter first number: ");
    scanf("%d", &b);

    printf("The sum of %d, %d is %d\n", a, b, add(a, b));
    printf("The difference of %d, %d is %d\n", a, b, sub(a, b));
    printf("The product of %d, %d is %d\n", a, b, product(a, b));
    printf("The division of %d, %d is %.2lf\n", a, b, division(a, b));

    return 0;
}
