// Dynamic memory allocation DMA

#include <iostream>

using namespace std;

int main()
{
    int *p = new int;

    if (!p)
    {
        cout << "Failed" << endl;
    }
    else
    {
        cout << "Succeed!" << endl;
    }

    *p = 10;

    cout << *p << endl;

    delete p;

    cout << *p;
}