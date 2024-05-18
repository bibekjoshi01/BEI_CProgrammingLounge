#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    int code;
    void input()
    {
        cout << "\nEnter the name of the person : ";
        cin >> name;
        cout << endl
             << "Enter the code of the person : ";
        cin >> code;
    }

    void display()
    {
        cout << endl
             << "Name of the person : " << name;
        cout << endl
             << "Code of the person : " << code;
    }
};

class Account : virtual public Person
{
public:
    float balance;

    void getBalance()
    {
        cout << endl
             << "Enter the balance : ";
        cin >> balance;
    }

    void display()
    {
        cout << endl
             << "balance : " << balance;
    }
};

class Admin : virtual public Person
{
public:
    int experience;

    void getexp()
    {
        cout << endl
             << "Enter the experience : ";
        cin >> experience;
    }

    void display()
    {
        cout << endl
             << "Experience : " << experience;
    }
};

class Master : public Account, public Admin
{
public:
    string Cname;

    void getCname()
    {
        cout << endl
             << "Enter the company name : ";
        cin >> Cname;
    }

    void display()
    {
        cout << endl
             << "Company name : " << Cname;
    }
};

int main()
{
    Master m1;
    m1.input();
    m1.getBalance();
    m1.getexp();
    m1.getCname();
    m1.Person::display();
    m1.Account::display();
    m1.Admin::display();
    m1.display();
    return 0;
}

