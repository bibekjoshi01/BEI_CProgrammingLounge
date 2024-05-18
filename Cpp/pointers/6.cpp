// Reverse a string using pointer and arrays

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[] = "Bibek";
    int len = strlen(str);
    char revStr[len + 1];
    cout << "Length of the string: " << len << endl;

    char *cptr = str;

    for (int i = 0; i < 5; i++)
    {
        revStr[i] = *(cptr + len - 1 - i);
    }

    revStr[len] = '\0'; // adding a null terminator

    cout << "Reversed String: " << revStr << endl;

    return 0;
}