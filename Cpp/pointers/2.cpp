// Pointer to Pointer Variable

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *ptr1, **ptr2;
    ptr1 = &a; // pointer to variable reference
    ptr2 = &ptr1; // pointer to pointer reference

    cout << "Address of a: " << ptr1 << endl;
    cout << "Address of ptr1: " << ptr2 << endl;
    cout << "Value of a though ptr1: " << *ptr1 << endl;
    cout << "Value of a though ptr2: " << **ptr2 << endl;
    cout << "Value of ptr1: " << *ptr2 << endl;

    return 0;
}