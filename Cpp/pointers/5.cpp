// Array of Pointers

#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 10, c = 12, d = 34, e = 56;
    // declares an array of 5 pointers
    int *parray[5] = {&a, &b, &c, &d, &e};

    for (int i = 0; i < 5; i++)
    {
        cout << *parray[i] << endl;
    }

    char *cptr[10] = {
        "books",
        "tv",
        "computer",
        "tablet"};

    for (int i = 0; i < 4; i++)
    {
        cout << cptr[i] << endl;
    }

    return 0;
}

/*
The array of pointer represents a collection of addresses.

*/