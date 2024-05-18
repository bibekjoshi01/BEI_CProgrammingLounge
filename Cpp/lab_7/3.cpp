#include <iostream>

using namespace std;

class CreatedInfoClass
{
public:
    CreatedInfoClass()
    {
        cout << "Created Info Class Constructor\n";
    }

    ~CreatedInfoClass()
    {
        cout << "Created Info Class Destructor\n";
    }
};

class User : public CreatedInfoClass
{
public:
    User()
    {
        cout << "User Constructor\n";
    }

    ~User()
    {
        cout << "User Destructor\n";
    }
};

int main()
{
    User obj;
    return 0;
}