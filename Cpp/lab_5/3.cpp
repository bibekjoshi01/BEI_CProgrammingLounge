// Define a class Complex with members real and imag. Use a constructor to construct the
// objects of the class Complex. Using static data members and static functions, display the
// total number of objects created before terminating the program.

#include <iostream>

using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    static int count;

public:
    // default constructor
    Complex()
    {
        count++;
    }

    // parameterized constructor
    Complex(double r, double i) : real(r), imag(i)
    {
        count++;
    }

    double getNum()
    {
        cout << "Real Part: " << real
             << "\nImaginary Part: " << imag << endl;
    }

    static void displayCount()
    {
        Complex c, c6, c0;
        cout << "Total Number of Instace Created: " << count << endl;
    }
};

int Complex::count = 0;

int test()
{
    Complex c, n, m;
}

int main()
{
    Complex complexNumber(3.0, 4.5);  // Creating a complex number object
    Complex complexNumber2(3.0, 4.5); // Creating a complex number object
    Complex complexNumber3(3.0, 4.5); // Creating a complex number object

    complexNumber.getNum();

    Complex::displayCount();
    test();
    cout << Complex::count;

    return 0;
}