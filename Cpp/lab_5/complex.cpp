#include <iostream>

using namespace std;

class Complex
{
private:
    const double real; // constant real part
    double imag;       // imaginary part

public:
    Complex(double r, double i) : real(r), imag(i) {} // constructor to initialize values

    double getReal() const
    {
        return real;
    }

    double getImag()
    {
        return imag;
    }
};

int main()
{
    Complex complexNumber(3.0, 4.5); // Creating a complex number object

    // Displaying the complex number using constant functions
    cout << "Real Part: " << complexNumber.getReal() << endl;
    cout << "Imaginary Part: " << complexNumber.getImag() << endl;

    return 0;
}
