// Develop a program using a class with 3x3 matrix as data member.
// Overload the * operator so as multiply two matrices

#include <iostream>

using namespace std;

class Matrix
{
private:
    int mat[3][3];

public:
    Matrix() {}
    // pass by reference
    Matrix(int (&mat)[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                this->mat[i][j] = mat[i][j];
            }
        }
    }

    void displayMatrix() const
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // using member function
    // Matrix operator*(const Matrix &other) const
    // {
    //     Matrix result;

    //     for (int i = 0; i < 3; i++)
    //     {
    //         for (int j = 0; j < 3; j++)
    //         {
    //             result.mat[i][j] = 0;
    //             for (int k = 0; k < 3; k++)
    //             {
    //                 result.mat[i][j] += mat[i][k] * other.mat[k][j];
    //             }
    //         }
    //     }

    //     return result;
    // }

    friend Matrix operator*(const Matrix &first, const Matrix &second);
};

// using friennd function
Matrix operator*(const Matrix &first, const Matrix &second)
{
    Matrix result;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result.mat[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                result.mat[i][j] += first.mat[i][k] * second.mat[k][j];
            }
        }
    }

    return result;
}

int main()
{
    int mat1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    int mat2[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

    Matrix obj1(mat1);
    Matrix obj2(mat1);

    Matrix obj3 = obj1 * obj2;

    cout << "Matrix 1:" << endl;
    obj1.displayMatrix();

    cout << endl
         << "Matrix 2:" << endl;
    obj2.displayMatrix();

    cout << endl
         << "Matrix 3:" << endl;
    obj3.displayMatrix();

    return 0;
}
