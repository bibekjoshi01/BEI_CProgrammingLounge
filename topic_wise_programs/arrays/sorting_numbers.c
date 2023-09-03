// Write a program to take a list of values from user into an array. Pass the list to a function
// which sorts the values in ascending order. Display the sorted list from main

#include <stdio.h>

int sortArray(int nums[], int length)
{
    int temp;

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
    
int main()
{
    int nums[100];
    int length;

    printf("Enter the length of list: ");
    scanf("%d", &length);

    // getting list from user
    printf("Enter the numbers: \n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &nums[i]);
    }

    sortArray(nums, length);

    printf("Sorted Array: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", nums[i]);
    }

    return 0;
}
