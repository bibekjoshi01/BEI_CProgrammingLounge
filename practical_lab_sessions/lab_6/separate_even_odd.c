#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int length, i;
    int arr[MAX_SIZE];
    int oddArr[MAX_SIZE], evenArr[MAX_SIZE];
    int oddCount = 0, evenCount = 0; // Separate count variables for odd and even arrays

    // Getting length of the array
    printf("\nEnter the length of the array: ");
    scanf("%d", &length);

    // Getting array elements
    printf("Enter the elements of the array: \n");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Separating array into even and odd
    for (i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    // Printing the separated arrays
    printf("The odd array is: \n");
    for (i = 0; i < oddCount; i++)
    {
        printf("%d\n", oddArr[i]);
    }

    printf("The even array is: \n");
    for (i = 0; i < evenCount; i++)
    {
        printf("%d\n", evenArr[i]);
    }

    printf("\n");
    return 0;
}
