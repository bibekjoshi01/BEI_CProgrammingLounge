#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter any two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is larger than " << num2;
    }
    else
    {
        cout << num2 << " is larger than " << num1;
    }
}