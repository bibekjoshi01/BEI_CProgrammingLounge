// 5. Write a program to multiply two matrices using pointers in c.

#include <stdio.h>
#define ROWS 2
#define COLUMNS 2

void multiplyMatrix(int *matrix1, int *matrix2, int *result)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            *(result + i * COLUMNS + j) = 0;
            for (int k = 0; k < COLUMNS; k++)
            {
                *(result + i * COLUMNS + j) += *(matrix1 + i * COLUMNS + k) * *(matrix2 + k * COLUMNS + j);
            }
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
        printf("\n\n");
    }
}

int main()
{
    int matrix1[ROWS][COLUMNS] = {{1, 2}, {3, 4}};
    int matrix2[ROWS][COLUMNS] = {{1, 2}, {3, 4}};
    int result[ROWS][COLUMNS];

    int *ptr1 = &matrix1[0][0];
    int *ptr2 = &matrix2[0][0];
    int *ptr3 = &result[0][0];

    multiplyMatrix(ptr1, ptr2, ptr3);

    printf("Product of Matrix1 and Matrix2: \n\n");
    displayMatrix(result);
}
