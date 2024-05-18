#include <iostream>
#include <string> // Include the string header
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Default constructor
    Person() : age(0) {}

    // Parameterized constructor
    Person(const string& n, int a) : name(n), age(a) {}

    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

int main() {
    // Using default constructor
    Person p1;

    // Using parameterized constructor
    Person p2("John Doe", 25);

    // Getting data for the object created using default constructor
    p1.getdata();

    // Displaying information for both objects
    cout << "\nInformation for Object 1 (default constructor):";
    p1.display();

    cout << "\n\nInformation for Object 2 (parameterized constructor):";
    p2.display();

    return 0;
}
