#include <iostream>

class Matrix
{
private:
    int data[2][2];

public:
    // Constructor to initialize the matrix with predefined values
    Matrix()
    {
        data[0][0] = 1;
        data[0][1] = 2;
        data[1][0] = 3;
        data[1][1] = 4;
    }

    // Constructor to initialize the matrix with user's values
    Matrix(int a, int b, int c, int d)
    {
        data[0][0] = a;
        data[0][1] = b;
        data[1][0] = c;
        data[1][1] = d;
    }

    // Overloading the binary operator -
    friend Matrix operator-(const Matrix &lhs, const Matrix &rhs);


    // Display the matrix
    void display() const
    {
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                std::cout << data[i][j] << std::endl;
            }
            std::cout << std::endl;
        }
    }
};

// Friend function to overload the binary operator -
Matrix operator-(const Matrix &lhs, const Matrix &rhs)
{
    Matrix result;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            result.data[i][j] = lhs.data[i][j] - rhs.data[i][j];
        }
    }
    return result;
}

int main()
{
    // Initializing M1 with predefined values
    Matrix M1;

    // Initializing M2 with user's values
    int a, b, c, d;
    std::cout << "Enter values for M2 (4 integers separated by spaces): ";
    std::cin >> a >> b >> c >> d;
    Matrix M2(a, b, c, d);

    // Initializing M3 with 0 values
    Matrix M3;

    // Performing the matrix subtraction and storing the result in M3
    M3 = M1 - M2;

    // Displaying the matrices
    std::cout << "M1:" << std::endl;
    M1.display();

    std::cout << "M2:" << std::endl;
    M2.display();

    std::cout << "M3 = M1 - M2:" << std::endl;
    M3.display();

    return 0;
}
