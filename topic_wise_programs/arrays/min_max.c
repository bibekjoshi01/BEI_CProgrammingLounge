// Question: Write a C program to find the largest and smallest elements in an integer array of size 10.
// Take the input array from the user.

#include <stdio.h>

int main()
{
    int array[10];

    printf("Enter the elements of array (10) \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    int smallest = array[0];
    int largest = array[0];

    for (int i = 0; i < 10; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
        else if (array[i] > largest)
        {
            largest = array[i];
        }
    }

    printf("The smallest number in array is %d\n", smallest);
    printf("The largest number in array is %d\n", largest);
}
