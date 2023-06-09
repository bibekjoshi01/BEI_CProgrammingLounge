/* 3. Program to swap two integers using call by value and call by reference methods
of passing arguments
*/

#include <stdio.h>

// Function prototype for call by value method
void swapByValue(int a, int b);

// Function prototype for call by reference method
void swapByReference(int *a, int *b);

int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n\n", num2);

    // Call the swapByValue function
    printf("Swapping by value:\n");
    swapByValue(num1, num2, &num1, &num2);
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n\n", num2);

    // Call the swapByReference function
    printf("Swapping by reference:\n");
    swapByReference(&num1, &num2);
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    return 0;
}

// Function definition for call by value method
void swapByValue(int a, int b, int *result1, int *result2)
{
    int temp = a;
    a = b;
    b = temp;

    *result1 = a;
    *result2 = b;
}

// Function definition for call by reference method
void swapByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
