// Order of Contructor and Destructor invocation in multiple inheritance

#include <iostream>

using namespace std;

class Top
{
public:
    Top()
    {
        cout << "Top Constructor" << endl;
    }
    ~Top()
    {
        cout << "Top Destructor" << endl;
    }
};

class Base1 : virtual public Top
{
public:
    Base1()
    {
        cout << "Base1 Constructor" << endl;
    }
    ~Base1()
    {
        cout << "Base1 Destructor" << endl;
    }
};

class Base2 : virtual public Top
{
public:
    Base2()
    {
        cout << "Base2 Constructor" << endl;
    }
    ~Base2()
    {
        cout << "Base2 Destructor" << endl;
    }
};

class Derived : public Base2, public Base1
{
public:
    Derived()
    {
        cout << "Derived Constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived Destructor" << endl;
    }
};

int main()
{
    Derived obj;
    return 0;
}