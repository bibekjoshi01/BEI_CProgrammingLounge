#include <iostream>
#include <cmath>
#include <stdexcept>

template <typename T>
T calculateSquareRoot(T number)
{
    try
    {
        if (number < 0)
        {
            throw std::invalid_argument("Cannot calculate square root of a negative number");
        }
        return std::sqrt(number);
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "An unknown error occurred" << std::endl;
    }
    return T{};
}

int main()
{
    try
    {
        // Test cases
        double num1 = 16.0;
        double num2 = -25.0;

        // Calculate square root for num1
        double result1 = calculateSquareRoot(num1);
        std::cout << "Square root of " << num1 << " is: " << result1 << std::endl;

        // Calculate square root for num2 (will throw an exception)
        double result2 = calculateSquareRoot(num2);
    }
    catch (...)
    {
        std::cerr << "An exception occurred" << std::endl;
    }
    return 0;
}
