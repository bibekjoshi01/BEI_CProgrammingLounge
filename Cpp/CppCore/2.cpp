// Function Selection / Function Overloading in C++
#include <iostream>
using namespace std;

// first function definition with default arguments
void add(int a = 5, int b = 5) // Reversed the order of parameters and provided default values
{
    cout << a + b;
}

void add(double a, int b)
{
    cout << a + b;
}

int main()
{
    add(4, 5); // Calls the first function, output will be 9
    cout << endl;
    add(3);
    cout << endl;
    add(); // Calls the first function with default arguments (5 and 5), output will be 10
    cout << endl;
    add(4.5, 3); // calls the second function
    cout << endl;
    add(4, 5.5); // implicit conversion

    return 0;
}
