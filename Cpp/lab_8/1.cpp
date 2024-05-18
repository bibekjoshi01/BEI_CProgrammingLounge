#include <iostream>

class Polygon
{
protected:
    float length, height;

public:
    // Default constructor
    Polygon() : length(0), height(0) {}
    // Parameterized constructor
    Polygon(float l, float h) : length(l), height(h) {}

    virtual void Area() = 0; // Pure virtual function
    virtual ~Polygon() {}    // Virtual destructor
};

class Rectangle : public Polygon
{
public:
    Rectangle(float l, float h) : Polygon(l, h) {}

    void Area() override
    {
        float area = length * height;
        std::cout << "Rectangle area: " << area << std::endl;
    }
};

class Triangle : public Polygon
{
public:
    Triangle(float l, float h) : Polygon(l, h) {}

    void Area() override
    {
        float area = 0.5 * length * height;
        std::cout << "Triangle area: " << area << std::endl;
    }
};

int main()
{
    Polygon *p;

    Rectangle rect(10, 20);
    rect.Area();

    p = &rect;

    p->Area();

    Triangle tri(10, 20);
    tri.Area();

    return 0;
}
