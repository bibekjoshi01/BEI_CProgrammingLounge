// 6.	Create a class having an array as member. Overload index operator
// ([]) to input and display the elements in the array. //

#include <iostream>

using namespace std;

class Array
{
private:
    int arr[5];

public:
    // Overloaded index operator for accessing elements
    int &operator[](int index)
    {
        if (index < 0 || index >= 5)
        {
            cerr << "Index out of range!" << endl;
            return arr[0];
        }
        return arr[index];
    }

    // Overloaded index operator for accessing elements
    const int &operator[](int index) const
    {
        if (index < 0 || index >= 5)
        {
            std::cerr << "Index out of bounds!" << std::endl;
            // Handle out of bounds condition (returning first element as default)
            return arr[0];
        }
        return arr[index];
    }

    // Function to display elements of the array
    void display() const
    {
        for (int i = 0; i < 5; ++i)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    Array arr;

    cout << "Enter 5 elements for the array: ";
    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i];
    }
    
    cout << "Elements of array: ";
    arr.display();

    return 0;
}