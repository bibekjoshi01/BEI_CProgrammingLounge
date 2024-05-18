// Function Definition of Class Template

#include <iostream>

using namespace std;

template <typename T, int SIZE>
class Array
{
private:
    T arr[SIZE];

public:
    Array() {}
    Array(T arr[SIZE])
    {
        for (int i = 0; i < SIZE; i++)
        {
            this->arr[i] = arr[i];
        }
    }

    void displayArray()
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << arr[i] << "\t";
        }
    }

    void getElements();
};

template <typename T, int SIZE>
void Array<T, SIZE>::getElements()
{
    cout << "\nEnter the elements of array: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Array<int, 5> obj(arr);
    obj.displayArray();

    Array<int, 5> obj2;
    obj2.getElements();
    obj2.displayArray();

    return 0;
}