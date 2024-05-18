// Overload the + operator to concat two strings

#include <iostream>

using namespace std;

class CustomString
{
private:
    string str;

public:
    CustomString()
    {
        cout << "Custom String default constructor " << endl;
    }
    
    CustomString(const string &str) : str(str)
    {
        cout << "Custom String [params] constructor " << endl;
    }

    CustomString operator+(const CustomString &other) const
    {
        return CustomString(this->str + other.str);
    }

    CustomString operator+(const char *strLiteral) const
    {
        return CustomString(this->str + strLiteral);
    }

    string display()
    {
        return str;
    }
};

class User
{
private:
    CustomString firstName, lastName, fullName;

public:
    User(const string &firstName, const string &lastName) : firstName(firstName), lastName(lastName) {}

    void getFullName()
    {
        fullName = firstName + " " + lastName;
        cout << fullName.display() << endl;
    }
};

int main()
{
    User user1("Bibek", "Joshi");

    user1.getFullName();

    return 0;
}