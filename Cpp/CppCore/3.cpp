// Enumeration data type in c++

#include <iostream>

using namespace std;

enum Days
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thrusday,
    Friday,
    Saturday
};

Days getDay(Days day)
{
    switch (day)
    {
    case Monday:
        return Monday;
        break;
    case Tuesday:
        return Tuesday;
        break;
    default:
        cout << "Invalid Day";
        break;
    }
}

int main()
{

    Days today = Tuesday;

    Days day = getDay(today);
    cout << day; // it will print 1

    return 0;
}

/* Enumerated data types (enums)
in C++ are useful for defining symbolic names for integral constants.

# Improve readability, maintainability, and to enforce type safety.
*/