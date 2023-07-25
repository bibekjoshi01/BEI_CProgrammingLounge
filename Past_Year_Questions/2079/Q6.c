/* Write a program to display the addition of two matrix. Create Seperate function for
Input, Addition and Result of two matrix */

#include <stdio.h>
#define ROWS 2
#define COLUMNS 3

void inputMatrix(int matrix[][COLUMNS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[][COLUMNS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void calculateResult(int matrix1[][COLUMNS], int matrix2[][COLUMNS], int result[][COLUMNS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main()
{
    int matrix1[ROWS][COLUMNS], matrix2[ROWS][COLUMNS], result[ROWS][COLUMNS];

    printf("Enter the elements of matrix1:\n");
    inputMatrix(matrix1);

    printf("Enter the elements of matrix1:\n");
    inputMatrix(matrix2);

    calculateResult(matrix1, matrix2, result);

    printf("Result: Matrix1 + Matrix2 \n");
    displayMatrix(result);
}