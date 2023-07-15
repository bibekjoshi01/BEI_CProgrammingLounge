// WAP to multiply two matrix of order 3x3 matrix

#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

void displayMatrix(int matrix[][COLUMNS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n\n");
    }
}

int main()
{
    int matrix1[ROWS][COLUMNS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS][COLUMNS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int result[ROWS][COLUMNS];

    // Multiplying both matrices

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            for (int k = 0; k < ROWS; j++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Matrix 1: \n\n");
    displayMatrix(matrix1);

    printf("Matrix 2: \n\n");
    displayMatrix(matrix2);

    printf("Product of Matrix1 and Matrix2: \n\n");
    displayMatrix(result);
}