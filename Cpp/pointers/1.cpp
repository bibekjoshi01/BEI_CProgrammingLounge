// Declaring and Initializing Pointer

#include <iostream>

using namespace std;

int main()
{
    // pointer declaration
    int *ptr; // This pointer variable can only point to address of int variable
    int a = 5;
    ptr = &a; // pointer initialization

    cout << "Address of A: " << ptr << endl;
    cout << "Value of A: " << *ptr << endl;

    return 0;
}