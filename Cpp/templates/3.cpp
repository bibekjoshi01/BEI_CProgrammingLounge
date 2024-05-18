// derived class template

#include <iostream>
using namespace std;

// Base class template
template <typename T>
class Base
{
protected:
    T value;

public:
    Base(T val) : value(val) {}
    void display()
    {
        cout << "Base value: " << value << endl;
    }
};

// Derived class template
template <typename T>
class Derived : public Base<T>
{
public:
    Derived(T val) : Base<T>(val) {}
    void displayDerived()
    {
        cout << "Derived value: " << this->value << endl;
    }
};

int main()
{
    // Creating objects of the derived class template
    Derived<int> derivedObj1(10);
    Derived<double> derivedObj2(3.14);

    // Calling member functions of the derived class objects
    derivedObj1.display();        // Calls Base class display function
    derivedObj1.displayDerived(); // Calls Derived class displayDerived function

    derivedObj2.display();        // Calls Base class display function
    derivedObj2.displayDerived(); // Calls Derived class displayDerived function

    return 0;
}
