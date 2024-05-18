// Write a program to add two numbers and to add two string
// using overloaded function template

#include <iostream>
#include <string>

using namespace std;

template <class T>
T add(T num1, T num2)
{
    return num1 + num2;
}

template <>
string add<string>(string str1, string str2)
{
    return str1 + " " + str2;
}

int main()
{
    string str1 = "Bibek";
    string str2 = "Joshi";

    int num1 = 5;
    int num2 = 10;

    cout << "Integer Addition: " << add(5, 6) << endl;
    cout << "String Concatenation: " << add(str1, str2) << endl;

    return 0;
}
