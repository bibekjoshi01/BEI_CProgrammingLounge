// Class to Class Type cast Celsius type to Fahrenheit type

#include <iostream>

using namespace std;

class Fahrenheit;

class Temperature
{
protected:
    float temperature;

public:
    Temperature(const float temperature) : temperature(temperature) {}

    float getTemperature() const
    {
        return this->temperature;
    }
};

class Celsius : public Temperature
{
public:
    Celsius(const float temperature) : Temperature(temperature) {}

    void displayTemperature() const
    {
        cout << temperature << " degree C" << endl;
    }
};

class Fahrenheit : public Temperature
{
public:
    Fahrenheit(const float temperature) : Temperature(temperature) {}

    // Definition of the Fahrenheit constructor that converts Celsius to Fahrenheit
    Fahrenheit(const Celsius &celsius) : Temperature(celsius.getTemperature() * 9.0 / 5.0 + 32) {}

    void displayTemperature() const
    {
        cout << temperature << " degree F" << endl;
    }
};

int main()
{
    Celsius celsius(100);
    celsius.displayTemperature();

    Fahrenheit fahrenheit(celsius);
    fahrenheit.displayTemperature();

    return 0;
}
