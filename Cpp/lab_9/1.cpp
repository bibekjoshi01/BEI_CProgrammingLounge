// Write a program to add two numbers uising function template

#include <iostream>

using namespace std;

template <class T>
T add(T num1, T num2)
{
    return num1 + num2;
}

int main()
{
    cout << "Interger Addtion: " << add<int>(5, 6) << endl;
    cout << "Float Addtion: " << add<float>(5.4f, 6.1f) << endl;
    cout << "Double Addtion: " << add<double>(5.5, 6.5) << endl;
    return 0;
}