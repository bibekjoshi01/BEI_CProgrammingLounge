#include <iostream>
#include "person.h"

using namespace std;

void Person::getData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}

void Person::display()
{
    cout << "\nName: " << name;
    cout << "\nAge: " << age;
}

