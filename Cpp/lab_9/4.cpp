// WAP to show the use of default template type
#include <iostream>
using namespace std;

// Template class with default template type
template <typename T = int>
class MyClass
{
private:
    T data;

public:
    MyClass(T val) : data(val) {}

    void display()
    {
        cout << "Data: " << data << endl;
    }
};  

int main()
{
    // MyClass with default template type (int)
    MyClass<> obj1(10);
    obj1.display();

    MyClass<double> obj2(3.14);
    obj2.display();

    MyClass<string> obj3("Hello");
    obj3.display();

    return 0;
}
