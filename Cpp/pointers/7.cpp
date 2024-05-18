// Pointer to functions

#include <iostream>
// Declare a pointer to a function that takes two int arguments and returns void
typedef void (*FuncPtr)(int, int);

using namespace std;

// Function definitions
void add(int a, int b)
{
    cout << "Sum: " << a + b << endl;
}

void subtract(int a, int b)
{
    cout << "Diff: " << a - b << endl;
}

int main()
{
    FuncPtr ptr;

    // Assign the address of the add function to funcPtr
    ptr = &add;
    // Call the function through the pointer
    ptr(1, 2);

    cout << endl;

    ptr = &subtract;
    ptr(3, 2);

    return 0;
}