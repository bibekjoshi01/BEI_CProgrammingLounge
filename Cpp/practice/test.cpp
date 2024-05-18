#include <iostream>

class MyClass
{
public:
    int value1;
    int value2;

    // Constructor with multiple parameters
    MyClass(int v1, int v2) : value1(v1), value2(v2)
    {
        std::cout << "Constructor called for values: " << value1 << " and " << value2 << std::endl;
    }
};

int main()
{
    MyClass *array = new MyClass[10]{
        {0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9}, {10, 11}, {12, 13}, {14, 15}, {16, 17}, {18, 19}};

    // Access and modify objects in the array
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Values of object " << i << ": " << array[i].value1 << " and " << array[i].value2 << std::endl;
    }

    // Delete the array when done
    delete[] array;

    return 0;
}
