// WAP to read two matrix of order 2x3, add them and display the resultant matrix

#include <stdio.h>
#define ROWS 2
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
    // int matrix1[ROWS][COLUMNS] = {{1, 2, 3}, {2, 3, 4}};
    // int matrix2[ROWS][COLUMNS] = {{1, 2, 3}, {2, 3, 4}};
    int matrix1[ROWS][COLUMNS];
    int matrix2[ROWS][COLUMNS];

    // getting the matrix 1 from user
    printf("Enter the elements of matrix 1: \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }


    // getting the matrix 2 from the user
    printf("Enter the elements of matrix 2: \n");

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }


    int result[ROWS][COLUMNS];

    printf("Matrix 1: \n\n");
    displayMatrix(matrix1);

    printf("Matrix 2: \n\n");
    displayMatrix(matrix2);

    // addMatrix(&matrix1, &matrix2, &result);

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Result Matrix: \n\n");
    displayMatrix(result);

    return 0;
}
