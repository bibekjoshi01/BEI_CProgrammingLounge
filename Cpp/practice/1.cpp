// Order of Constructor and Desctuctor Invocation

#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class Constructor" << endl;
    }

    ~Base()
    {
        cout << "Base class Destructor" << endl;
    }
};

int main()
{
    Base obj1;
    Base obj2;

    return 0;
}