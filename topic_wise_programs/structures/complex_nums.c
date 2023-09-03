// Write a program to represent complex number by a structure with real and imaginary as
// members. Take 2 complex numbers as input from user into structure variables. Pass the
// complex numbers to a function which calculates sum and returns it. Display the sum from
// another tunction display

#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

struct Complex addComplex(struct Complex num1, struct Complex num2)
{
    struct Complex result;

    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;

    return result;
}

void displayComplex(struct Complex sum)
{
    printf("The sum is %.2f + %.2fi\n", sum.real, sum.imaginary);
}

int main()
{
    struct Complex num1, num2, sum;

    printf("Enter the first complex number: (real, imaginary) ");
    scanf("%f, %f", &num1.real, &num1.imaginary);

    printf("Enter the second complex number: (real, imaginary) ");
    scanf("%f, %f", &num2.real, &num2.imaginary);

    sum = addComplex(num1, num2);

    displayComplex(sum);

    return 0;
}