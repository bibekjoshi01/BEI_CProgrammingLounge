// 9. Write a program that reads numbers from a file containing series of numbers
// and seperate odd and even from the numbers and writes on two seperate files

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, evenNums[10], oddNums[10];
    int evenCount = 0, oddCount = 0;
    FILE *fptr;
    fptr = fopen("numbers.txt", "r");

    if (fptr == NULL)
    {
        printf("Error while opening the file !");
        exit(1);
    }

    // Reading the numbers from file
    while (evenCount < 10 && oddCount < 10 && fscanf(fptr, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            evenNums[evenCount] = num;
            evenCount++;
        }
        else
        {
            oddNums[oddCount] = num;
            oddCount++;
        }
    }
    fclose(fptr);

    // Writing the odd numbers to the file
    fptr = fopen("oddNums.txt", "w");
    for (int i = 0; i < oddCount; i++)
    {
        fprintf(fptr, "%d\n", oddNums[i]);
    }

    fclose(fptr);

    // Writing the even numbers to the file
    fptr = fopen("evenNums.txt", "w");
    for (int i = 0; i < evenCount; i++)
    {
        fprintf(fptr, "%d\n", evenNums[i]);
    }

    fclose(fptr);

    return 0;
}
