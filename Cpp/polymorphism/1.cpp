// Virtual Function

#include <iostream>
using namespace std;

// Base class Shape
class Shape
{
public:
    // Virtual function to calculate area
    virtual float area() const
    {
        return 0;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Override the area function for Rectangle
    float area() const override
    {
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Override the area function for Circle
    float area() const override
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Shape *shapes[2];

    Rectangle rectangle(5, 4);
    Circle circle(3);

    Shape *sh1 = &circle;
    cout << "Area of circle: " << sh1->area() << endl;

    // Assign the addresses of rectangle and circle objects to the Shape pointers
    shapes[0] = &rectangle;
    shapes[1] = &circle;

    // Iterate through the shapes and calculate their areas
    for (int i = 0; i < 2; ++i)
    {
        cout << "Area of shape " << i + 1 << ": " << shapes[i]->area() << endl;
    }

    return 0;
}
