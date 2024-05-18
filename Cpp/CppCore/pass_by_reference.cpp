// Pass by reference

#include <iostream>

using namespace std;

string strConcat(string &str1, string &str2)
{
    return (str1 + " " + str2);
}

int main()
{
    string firstName = "Bibek";
    string lastName = "Joshi";

    string fullName = strConcat(firstName, lastName);

    cout << "Full Name: " << fullName;

    return 0;
}