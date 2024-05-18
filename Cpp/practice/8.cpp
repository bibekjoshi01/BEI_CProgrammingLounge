// Order of constructor and destructor invocation during hybrid inheritance

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

class A : public Base
{
public:
    A()
    {
        cout << "A class Constructor" << endl;
    }
    ~A()
    {
        cout << "A class Destructor" << endl;
    }
};

class B : public Base
{
public:
    B()
    {
        cout << "B class Constructor" << endl;
    }
    ~B()
    {
        cout << "B class Destructor" << endl;
    }
};

class C : public A, public B
{
public:
    C()
    {
        cout << "C class Constructor" << endl;
    }
    ~C()
    {
        cout << "C class Destructor" << endl;
    }
};

int main()
{
    C obj;

    return 0;
}