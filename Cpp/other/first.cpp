#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int fieldWidth = 12;

    cout << setw(fieldWidth) << left << "Maths"
         << "= 77\n";
    cout << setw(fieldWidth) << left << "Physics"
         << "= 77\n";
    cout << setw(fieldWidth) << left << "Chemistry"
         << "= 77\n";
}
