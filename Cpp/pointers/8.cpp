// Pointers to objects

#include <iostream>

using namespace std;

class Item
{
    int code;
    float price;

public:
    void getData(int a, float b)
    {
        code = a;
        price = b;
    }

    void show(void)
    {
        cout << "Code: " << code << "\n";
        cout << "Price: " << price << "\n\n";
    }
};

int main()
{
    Item x;
    Item *ptr = &x;

    x.getData(34, 23.234);
    x.show();

    // using pointer
    ptr->getData(100, 67.5);
    ptr->show();

    // *ptr is alias of x so,
    (*ptr).show(); // is valid

    // dynamic creation of object
    Item *obj2 = new Item();

    obj2->getData(452, 45.3);
    obj2->show();

    delete obj2;

    return 0;
}