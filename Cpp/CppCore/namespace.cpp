#include <iostream>

// Namespace declaration
namespace Math {
    // Function to add two numbers
    int add(int a, int b) {
        return a + b;
    }

    // Function to subtract two numbers
    int subtract(int a, int b) {
        return a - b;
    }
}

namespace Physics {
    // Function to calculate acceleration
    double calculateAcceleration(double velocity, double time) {
        return velocity / time;
    }
}

using namespace Math;

int main() {
    // Using functions from the Math namespace
    std::cout << "Addition: " << add(5, 3) << std::endl;
    std::cout << "Subtraction: " << Math::subtract(10, 7) << std::endl;

    // Using a function from the Physics namespace
    std::cout << "Acceleration: " << Physics::calculateAcceleration(20.0, 2.5) << std::endl;

    return 0;
}
