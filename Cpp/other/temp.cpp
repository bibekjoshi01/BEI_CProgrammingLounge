#include <iostream>

using namespace std;

int main()
{
    int choice;
    float temperature;

    cout << "Choose Conversion: \n";
    cout << "1. Celsius to Fahrenheit: \n";
    cout << "2. Fahrenheit to Celsius: \n";
    cout << "Enter your Choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        cout << "Temperature in Fahrenheit: " << (temperature * 9 / 5) + 32 << "F";
    }

    else if (choice == 2)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        cout << "Temperature in Celsius: " << (temperature * 9 / 5) + 32 << "C";
    }
    else
    {
        cout << "Please select the valid choice (1 or 2): \n";
    }

    return 0;
}