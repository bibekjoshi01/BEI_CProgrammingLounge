// Write a program to convert decimal number to binary number.

#include <stdio.h>


int main()
{
    int decimalNumber;
    int i = 0;
    int binaryNum[20];

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);


    if (decimalNumber == 0)
    {
        printf("Binary Representation: %d", 0);
        return 0;
    }

    while (decimalNumber > 0)
    {
        binaryNum[i] = decimalNumber % 2;
        decimalNumber /= 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binaryNum[j]);
    }

    return 0;
}
