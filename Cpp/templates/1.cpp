// Default Arguments in Function Template

#include <iostream>

using namespace std;

template <typename T>
T add(T a, T b, T c = 0)
{
    return (a + b + c);
}

int main()
{
    cout << "int result1: " << add<int>(5, 6, 7) << endl;
    cout << "int result2: " << add<int>(5, 6) << endl;
    cout << "double result3: " << add<double>(5.4, 6.7, 1.2) << endl;
    cout << "float result4: " << add<float>(2.1f, 4.5f) << endl;

    return 0;
}