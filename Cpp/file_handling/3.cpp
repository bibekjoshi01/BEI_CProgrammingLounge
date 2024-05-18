// Creating a Inventory System

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Inventory
{
private:
    int id;
    char name[20];
    float price;

public:
    void getData(void)
    {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata(void)
    {
        cout << setw(10) << id
             << setw(10) << name
             << setprecision(2) << setw(10) << price << endl;
    }
}; // End of class definition

int main()
{
    Inventory item;
    fstream inoutfile;

    inoutfile.open("STOCK.DAT", ios::app | ios::in | ios::out | ios::binary);

    if (!inoutfile.is_open())
    {
        cerr << "Failed to open file!" << endl;
        return 1;
    }

    inoutfile.seekg(0, ios::beg); // go to start

    cout << "CURRENT CONTENTS OF STOCK" << endl;

    while (inoutfile.read((char *)&item, sizeof item))
    {
        item.putdata();
    }
    inoutfile.clear();

    cout << "\n Add an Item\n";
    item.getData();
    char ch;
    cin.get(ch);
    inoutfile.write((char *)&item, sizeof item);

    inoutfile.seekg(0); // go to the start

    cout << "CONTENTS OF APPENDED FILE\n";
    while (inoutfile.read((char *)&item, sizeof item))
    {
        item.putdata();
    }

    inoutfile.close();

    return 0;
}