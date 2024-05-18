#include <iostream>
#include <math.h>

using namespace std;

class Complex
{
private:
    double real, imag, magnitude;

public:
    // default constructor
    Complex() {}

    // parameterized constructor
    Complex(double r, double i, double magnitude = 0.0) : real(r), imag(i) {}

    double displayNum()
    {
        cout << "Real Part: " << real
             << "\nImaginary Part: " << imag << endl;
        cout << "\nMagnitude: " << magnitude;
    }

    friend void calculateMagnitude(Complex &num);
};

void calculateMagnitude(Complex &num)
{
    num.magnitude = sqrt(pow(num.real, 2) + pow(num.imag, 2));
}

int main()
{
    Complex complexNumber(5.5, 6.5);

    calculateMagnitude(complexNumber);
    complexNumber.displayNum();

    return 0;
}