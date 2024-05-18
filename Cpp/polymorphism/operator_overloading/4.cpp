// Overloading * operator

#include <iostream>
using namespace std;

class Matrix
{
private:
    int arr[2][2];

public:
    Matrix() {}
    Matrix(int arr[2][2])
    {
        // Corrected the inner loop increment from i++ to j++
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                this->arr[i][j] = arr[i][j];
            }
        }
    }

    void display() const
    {
        // Corrected the inner loop increment from i++ to j++
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << arr[i][j] << "\t";
            }

            cout << endl;
        }
    }

    Matrix operator*(int num) const
    {
        Matrix temp;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                temp.arr[i][j] = num * this->arr[i][j];
            }
        }

        return temp;
    }

    friend Matrix operator*(int num, const Matrix &m);
};

Matrix operator*(int num, const Matrix &m)
{
    return m * num;
}

int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    Matrix m1(arr);

    m1.display();

    Matrix m2 = 2 * m1;

    m2.display();

    return 0;
}
