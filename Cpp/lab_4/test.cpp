#include <iostream>

using namespace std;

class X
{
public:
    int x;
};

int main()
{
    X a = {10}; // intialization
    X b = a; // copy constructor

    cout << "a: " << a.x << " "
         << "b: " << b.x;

    return 0;
}
