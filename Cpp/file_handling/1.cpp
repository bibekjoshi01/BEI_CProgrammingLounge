// Opening Files Using Constructor

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Enter your name: ";
    char name[30];
    cin.getline(name, 30);

    cout << "Enter your salary: ";
    float salary;
    cin >> salary;

    ofstream outfile("test.txt");
    if (!outfile.is_open())
    {
        cerr << "Unable to open a file !";
    }
    outfile << name << endl;
    outfile << salary << endl;

    outfile.close();
    cout << "File write operation successful !" << endl;

    // Reading from file
    ifstream infile("test.txt");
    if (!infile.is_open())
    {
        cerr << "Unable to open a file !";
    }
    infile.getline(name, 30);
    infile >> salary;

    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;

    infile.close();
    cout << "File read operation successful !" << endl;

    return 0;
}