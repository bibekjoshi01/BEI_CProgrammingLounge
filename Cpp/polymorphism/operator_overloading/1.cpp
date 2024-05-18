// overloading postincrement operator
#include <iostream>

using namespace std;

template <typename KM, typename M, typename CM>
class Distance
{
private:
    KM km;
    M m;
    CM cm;

public:
    Distance(const KM &km, const M &m, const CM &cm) : km(km), m(m), cm(cm) {}

    void display()
    {
        cout << km << " KM " << m << " M " << cm << " CM " << endl;
    }

    // Common functionality for increment/decrement
    void increment()
    {
        km++;
        m++;
        cm++;
        if (cm >= 100)
        {
            m += cm % 100;
            cm /= 100;
        }
        if (m >= 1000)
        {
            km += m % 1000;
            m /= 1000;
        }
    }

    void decrement()
    {
        km--;
        m--;
        cm--;
    }

    // Prefix increment/decrement operators
    void operator++()
    {
        increment();
    }

    void operator--()
    {
        decrement();
    }

    // Postfix increment/decrement operators
    void operator++(int)
    {
        increment();
    }

    void operator--(int)
    {
        decrement();
    }
};

int main()
{
    Distance<double, int, int> d1(5.6, 999, 101);
    // --d1; // Prefix decrement
    // cout << "After prefix decrement: ";
    // d1.display();
    // cout << endl;

    // d1--; // Postfix decrement
    // cout << "After postfix decrement: ";
    // d1.display();
    // cout << endl;

    ++d1; // Prefix increment
    cout << "After prefix increment: ";
    d1.display();
    cout << endl;

    d1++; // Postfix increment
    cout << "After postfix increment: ";
    d1.display();
    cout << endl;

    return 0;
}