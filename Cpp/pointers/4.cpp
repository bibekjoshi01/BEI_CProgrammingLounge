// Pointer Manipulation

#include <iostream>

using namespace std;

int main()
{
    int a = 10, *ptr;
    ptr = &a;

    cout << "Value of a: " << a << endl;
    *ptr = (*ptr) / 2;

    cout << "Value of a: " << *ptr << endl;
    cout << "Value of a: " << a << endl;

    int *aptr, arr[6] = {1, 2, 3, 4, 5, 6};
    aptr = &arr[0]; // or aptr = arr // points to first element of array

    aptr++;
    cout << "Value of aptr: " << *aptr << endl;

    aptr += 3;
    cout << "Value of aptr: " << *aptr << endl;

    cout << "Value at arr[30]: " << arr[30] << endl;

    return 0;
}

/*
*Notes:*
1. Before dereferencing a pointer, it is essential to assign a value to the
pointer, if not either compile time error or a garbage value will be assigned

2. We cannot perform pointer arithmetic on variables which are not stored
in contiguos memory location

3. There is no error checking of array bounds in C++. The compiler issues no 
warning if we attempt to access arr[30] location.
*/

