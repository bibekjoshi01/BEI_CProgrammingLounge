// Question: Implement a function in C that swaps the values of two integer variables using pointers.
// Test the function by swapping two integers provided by the user.

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 5;
    int y = 6;

    printf("Initial values of x = %d and y = %d\n", x, y);
    swap(&x, &y);
    printf("Swapped values of x = %d and y = %d\n", x, y);
    
    return 0;
}