#include <iostream>
using namespace std;

int main()
{
    int number;
    bool isPrime = true;

    cout << "Enter the number: ";
    cin >> number;

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "The given number is prime.";
    else
        cout << "The given number is not prime.";

    return 0;
}