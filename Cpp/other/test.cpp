#include <iostream>
#include <cmath> // For the constant PI

using namespace std;

int main() {
    // Step 2: Define variables
    double degrees, radians;

    // Step 3: Input value to variables
    cout << "Enter the angle in degrees: ";
    cin >> degrees;

    // Step 4: Calculate
    radians = (M_PI / 180) * degrees;

    // Step 5: Display the output
    cout << "The angle in radians is: " << radians;

    // Step 6: Stop
    return 0;
}
