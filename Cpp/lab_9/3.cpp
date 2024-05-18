// Write a program to create a class list using class template
// your program shoudl store, delete and modify the element (of any type) in a list.
// List is an arry like UD data type

#include <iostream>
using namespace std;

template <typename T, int maxSize>

class List {
private:
    T elements[maxSize];
    int size;
    
public:
    List() : size(0) {}

    bool isEmpty() const {
        return size == 0;
    }

    bool isFull() const {
        return size == maxSize;
    }

    int getSize() const {
        return size;
    }

    void insert(const T& element) {
        if (isFull()) {
            cout << "List is full. Cannot insert more elements." << endl;
            return;
        }
        elements[size++] = element;
    }

    void remove(const T& element) {
        int index = -1;
        for (int i = 0; i < size; ++i) {
            if (elements[i] == element) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            cout << "Element not found in the list." << endl;
            return;
        }
        for (int i = index; i < size - 1; ++i) {
            elements[i] = elements[i + 1];
        }
        size--;
    }

    void modify(const T& oldElement, const T& newElement) {
        for (int i = 0; i < size; ++i) {
            if (elements[i] == oldElement) {
                elements[i] = newElement;
                return;
            }
        }
        cout << "Element to be modified not found." << endl;
    }

    void display() const {
        if (isEmpty()) {
            cout << "List is empty." << endl;
            return;
        }
        cout << "Elements in the list: ";
        for (int i = 0; i < size; ++i) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create a list of integers with a maximum size of 5
    List<int, 5> intList;

    // Insert some elements
    intList.insert(10);
    intList.insert(20);
    intList.insert(30);
    intList.insert(40);
    intList.insert(50);

    intList.display();

    intList.insert(60);

    intList.remove(30);

    intList.display();

    intList.modify(20, 25);

    intList.display();

    return 0;
}
