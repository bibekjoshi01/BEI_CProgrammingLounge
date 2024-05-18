// Null and Void  Pointer

#include <iostream>

using namespace std;

int main()
{
    // null pointer -> does not point to any memory location.
    int *ptr1 = NULL; // or int *ptr1 = nullptr;

    if (ptr1 == nullptr)
    {
        cout << "Pointer is null" << endl;
    }

    // void pointer -> no associated data type information.
    // It can point to any data type.
    void *ptr2;
    int num = 10;
    ptr2 = &num;
    // Before Accessing, type cast the variable to the specific data types
    cout << "Value of num: " << *(static_cast<int *>(ptr2)) << endl;
    return 0;
}